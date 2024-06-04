# include<iostream>
# include<vector>
using namespace std;

// sample input,n=4
// [[1],
// [1,1],
// [1,2,1],
// [1,3,3,1]]

vector<vector<int>> pascaltriangle(int n){

    vector<vector<int>> pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);

        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
            }
        }
    }
    return pascal;
}
int main(){
    cout<<"Enter the number of rows: ";
    int n;
    cin>>n;
    vector<vector<int>> ans;

    ans=pascaltriangle(n);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}