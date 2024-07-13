#include <iostream>
using namespace std;
#include <vector>

void spiralMatrix(vector<vector<int>> &matrix){
    int direction=0;
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    while(left<=right && top<=bottom){
        // 0-left to right
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<matrix[top][col]<<" ";
            }
            top++;
        }
        // 1-top to bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<matrix[row][right]<<" ";
            }
            right--;
        } 
        // 2-right to left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        } 
        // 3-bottom to top
        else {
            for(int row=bottom;row>=top;row--){
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;

    }

}

int main(){
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The spiral matrix is: "<<endl;
    spiralMatrix(matrix);
    return 0;
}