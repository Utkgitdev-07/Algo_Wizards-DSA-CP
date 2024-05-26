#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int elements;
        cout<<"Enter the elements: ";
        cin>>elements;
        v.push_back(elements);
    }
    int x;
    cout<<"Enter the element to find for last occurence: ";
    cin>>x;
    int occurence=-1;

    /*for(int i=0;i<v.size();i++){
        if(x==v[i]){
            occurence=i;
        }
    }*/

    for(int i=v.size()-1;i>=0;i--){
        if(x==v[i]){
            occurence=i;
            break;
        
        }
    }
    if(occurence==-1){
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Last occurence of "<<x<<" is at index "<<occurence<<endl;
    }
    
    return 0;
    
}