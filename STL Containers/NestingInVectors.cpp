#include<iostream>
#include<vector>
using namespace std;

void print_vec(vector<int> &v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];

    }

}

int main(){
    // vector<pair<int,int>> v;
    // // direct initialisation
    // v={{1,2},{3,4},{5,6}};

    // // how to take input

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    //    // how to print?
    //     cout<<v[i].first<<v[i].second<<" ";
    // }
    
    // Array of vector
    vector<int> v[10];
     //or
    int n;
    cin>>n;
    vector<int>v1[n];

    // to take input
    for(int i=0;i<n;i++){
        int N;
        cin>>N;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            v1[i].push_back(x);

        }

        // to print
       for(int i=0;i<n;i++){
         print_vec(v1[i]);
       }
    }



}