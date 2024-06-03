#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns: ";
    int r,c;
    cin>>r>>c;  
    int array[r][c];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>array[i][j];
        }
    }
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose_array[c][r];
    
    for(int i=0;i<c;i++){                 
        for(int j=0;j<r;j++){
            transpose_array[i][j]=array[j][i];         // Transpose of a matrix is obtained by interchanging rows and columns
        }
    }
    cout<<"Transpose of the matrix is: "<<endl;   
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<transpose_array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}