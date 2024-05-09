// it is a data structure which stores key value pairs

#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){
    // normal maps ---> data stored in sorted order default
    // key   values
    //  1     abc
    //  2     cde
    //  3     acd
    // normal maps implementation --> Red black tress

    map<int,string> m;
    m[1]="abc";
    m[5]="cde";
    m[3]="acd";
    // or
    m.insert({4,"def"});

    // map<int,string>:: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // by using auto keyword
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    // keys are unique in maps same key can override previous key data
    // doesn't allow duplicate key insertion

    auto it=m.find(3); // return iterator to the key
    m.erase(it);  // to delete a key
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    m.clear();// clear the whole map
    

    


}