#include<iostream>
using namespace std;

int main(){
    pair<int,string> p1;  // declaration
    pair<int,int> p2;// declaration
    p1={9,"abcdef"}; // initialisation
    p2=make_pair(5,4); // initialisation
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    // to make copy of pair

    pair<int,string> &p3=p1;
    p1.first=3;
    cout<<p3.first<<" "<<p3.second<<endl;

    // why need pair?
    // To maintain relatioship between two data types

     pair<int,int> p_array[3];
     p_array[0]={1,2};
     p_array[1]={2,3};
     p_array[2]={3,4};

    //  swap(p_array[0],p_array[1]);
    for(int i=0;i<3;i++){
            cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

    }

 
    return 0;
    
}