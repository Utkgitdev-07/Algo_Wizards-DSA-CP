#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    //for loop

    for(int i=0;i<n;i++){
        int elements;
        cout<<"Enter the elements: ";
        cin>>elements;
        v.push_back(elements);
    }

    //for loop
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    v.insert(v.begin()+2,11);   //inserting 11 at index 2
    
    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }

    cout<<endl;

    v.erase(v.end()-2);  //erasing the second last 

    //while loop

    int i=0;
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }

    return 0;
}
