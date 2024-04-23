// determines the data type 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    auto a=1;
    cout<<a;

    vector<int> v={1,23,3,4,5};

    // we can write iterator like this
    for(auto it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";  
     }
}