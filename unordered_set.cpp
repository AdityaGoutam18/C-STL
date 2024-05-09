// functions same as set but not in sorted order
// quite similar to unordered maps
#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<int> u_s){
    for(auto it:u_s){
        cout << it << " ";
    }
}

    int main()
{
    unordered_set<int> u_s; // declaraton
    u_s.insert(5);// insertion
    u_s.insert(15);
    u_s.insert(10);
    u_s.insert(20);

    // to Access values
    // for (auto it = u_s.begin(); it != u_s.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    print(u_s);  // or we can make a function and call it

    // check if element is present or not
    if (u_s.find(10) != u_s.end()){
        cout << "Element is present";
    }else{
        cout << "Element is not present";
    }
}