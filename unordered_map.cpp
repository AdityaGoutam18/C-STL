#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

void print(unordered_map<int,string>&m){
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    //declaration
    unordered_map<int,string>m;
    // insertion
    m[1]="abc";
    m[5]="cde";
    m[3]="acd";
    m[6]="a";
    m[5]="cae";

    print(m);

    // unordered map uses inbuild hash table
    // it calculates hash of evry keys
    //whereas ordered map uses trees as inbuilt implementation

    // set,vectors,pairs cannot use with unoredred maps 
    // because hash function is not defined internallyfcxd
}