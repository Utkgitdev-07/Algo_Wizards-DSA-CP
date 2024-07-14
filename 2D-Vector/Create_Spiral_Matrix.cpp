// given n and the matrix is of nxn and create spiral matrix of elements ranges from 1 to n square.
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> CreateSpiralMatrix(int n){
    vector<vector<int>> matrix(n,vector<int>(n));
    int direction=0;
    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;
    int count=1;
    while(left<=right && top<=bottom){
        // 0-left to right
        if(direction==0){
            for(int col=left;col<=right;col++){
                matrix[top][col]=count++;
            }
            top++;
        }
        // 1-top to bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                matrix[row][right]=count++;
            }
            right--;
        } 
        // 2-right to left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                matrix[bottom][col]=count++;
            }
            bottom--;
        } 
        // 3-bottom to top
        else {
            for(int row=bottom;row>=top;row--){
                matrix[row][left]=count++;
            }
            left++;
        }
        direction=(direction+1)%4;

    }
    return matrix;
}

int main(){
    int n;
    cout<<"Enter the number of rows and columns: ";
    cin>>n;
    vector<vector<int>> matrix;
    matrix=CreateSpiralMatrix(n);
    cout<<"The spiral matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}