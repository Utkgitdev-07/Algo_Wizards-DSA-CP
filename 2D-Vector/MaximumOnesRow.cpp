// for a given 2d boolean array,where each row is sorted. find the row of maximum number of 1's in the array.

#include<vector>
#include<iostream>
using namespace std;

// 0 1 1 1
// 0 0 0 1
// 0 0 1 1

int maxnumberofones(vector<vector<int>> &v){
    int maxones=INT16_MIN;
    int maxonesrow=-1;
    int columns=v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberofones=columns-j;
                if(numberofones>maxones){
                    maxones=numberofones;
                    maxonesrow=i;
                }
                break;
            }
        }
    }
    return maxonesrow;

}
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    vector <vector<int>> vec(n,vector<int>(m));
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res=maxnumberofones(vec);
    cout<<"Maximum 1's row is: "<<res;
    return 0;

}