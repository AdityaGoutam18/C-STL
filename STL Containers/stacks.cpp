// LIFO --> last in first out
// we can access only 1. top element 2. size
// common opertaions
// 1. push
// 2. pop
// 3. peek
// 4. isEmpty
// 5. isFull
// 6. display

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;// implementation

    s.push(10); // inserting element in stack
    s.push(12);
    s.push(15);
    while(!s.empty()){
        cout<<s.top()<<endl; // to view top element of stack
        s.pop();
        cout<<s.top()<<endl;// to remove top element
    }

}