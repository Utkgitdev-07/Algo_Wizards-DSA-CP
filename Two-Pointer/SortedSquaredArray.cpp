// Problem: Squaring a Sorted Array in non-decreasing order,given also in non-descending order.
// highest magnitude element is at the end of the array.
// for example: [-10,-3,2,4,5]=>[4,9,16,25,100]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void squaredArray(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    vector<int> result;

    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            result.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            result.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(result.begin(),result.end());
    cout<<"Squared Array is:-";
    for(int i=0;i<v.size();i++){
        cout<<result[i]<<" ";
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

    squaredArray(v);

    return 0;
}
