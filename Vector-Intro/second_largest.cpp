#include<iostream>
using namespace std;

int largestElementIndex(int arr[],int size){
    int largetsIndex=-1;
    int max=INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            largetsIndex=i;
        }
    }
    return largetsIndex;
}

int main(){
    int arr[]={7,10,2,10,4,6,3,1,2,0,6};
    int size=11;
    int largestIndex=largestElementIndex(arr,size);

    int largedElement=arr[largestIndex];
    for(int i=0;i<size;i++){
        if(arr[i]==largedElement){
            arr[i]=-1;
        }
    }
    
    largestIndex=largestElementIndex(arr,size);
    cout<<"Second largest element in the array is: "<<arr[largestIndex]<<endl;

    return 0;
}