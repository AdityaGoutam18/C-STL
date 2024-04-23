//set stores unique elements
// stores in sorted order
#include<iostream>
#include<set>
#include<string>

using namespace std;

void print(set<string> &s){
    for(string value:s){
        cout<<value<<endl;
    }
    // or
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("cde");
    s.insert("fgh");
    s.insert("ijkl");

     // to access values
   print(s);
    

}