// for matrix multiplication
// column of first matrix should be equal to row of second matrix
// result matrix will have row of first matrix and column of second matrix

#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter the number of rows and columns of first matrix: ";
    cin>>r1>>c1;
    int a[r1][c1];
    cout<<"Enter the elements of first matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }

    int r2,c2;
    cout<<"Enter the number of rows and columns of second matrix: ";
    cin>>r2>>c2;
    int b[r2][c2];
    cout<<"Enter the elements of second matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

    // check if column of first matrix is equal to row of second matrix

    if(c1!=r2){
        cout<<"Matrix multiplication is not possible";
        return 0;
    }

    int c[r1][c2];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<c1;k++){
                value+=a[i][k]*b[k][j];
            }
            c[i][j]=value;
        }
    }

    cout<<"Resultant matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}