#include <iostream>
#include <vector>
using namespace std;

void SortZerosAndOnes(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }

        if(left_ptr==0){
            left_ptr++;
        }

        if(right_ptr==1){
            right_ptr--;
        }

    }
    return;

}

int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    SortZerosAndOnes(v);

    cout<<"Sorted Elements are:-";
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
    
}