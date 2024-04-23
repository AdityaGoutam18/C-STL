#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
        cout<<q.front()<<endl;

    }
}