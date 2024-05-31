#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    const int N=1e5+10;  // 10^5 max size of the array
    vector<int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cout<<"Enter the element to find the frequency: ";
        cin>>x;
        cout<<"Frequency of "<<x<<" is "<<freq[x]<<endl;
    }
    return 0;
}