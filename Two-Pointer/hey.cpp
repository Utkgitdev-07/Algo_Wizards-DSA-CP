#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
int main(){
    vector<int> v;
    int n=5; // size of the vector

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k=2; // number of rotations
    k=k%n; // check if k is greater than n

    reverse(v.begin(),v.end()); // reverse the vector
    reverse(v.begin(),v.begin()+k); // reverse the first 2 elements
    reverse(v.begin()+k,v.end()); // reverse the rest of the elements

    for(int a:v){
        cout<<a<<" ";
    }   
    cout<<endl;
    return 0;
}