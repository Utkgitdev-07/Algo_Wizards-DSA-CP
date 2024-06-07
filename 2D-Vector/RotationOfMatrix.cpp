// Given a square matrix roate it by 90 degrees in clockwise direction,wihout using any extra space.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void rotatearray(vector<vector<int>> &v){
    int n=v.size();

    // Transpose of a matrix is obtained by interchanging rows and columns
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){                 // swapping element below the diagonal
            swap(v[i][j],v[j][i]);
        }
    }

    // Reverse the elements of each row
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    
    return;
}




int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n));
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    cout<<"Original Matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    rotatearray(vec);
    cout<<"Matrix after rotating by 90 degrees in clockwise direction is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}