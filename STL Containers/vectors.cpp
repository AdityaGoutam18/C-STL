#include<iostream>
#include<vector>
using namespace std;

string print_vec(vector<string> &vs){
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<endl;
    }
}

int main(){
    // vector initialisation
    vector<int> v;    
    vector<double> d;    
    vector<pair<int,int>> v_p; //vector of pair

    // how to take input?    

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    // to print vector

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    // to delete element from vector
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    // cpy vector
    vector<int> &v2=v; // always use reference
    v2.push_back(6);
    for(int i=0;i<v2.size();i++){
        cout<<v[i];
    }

    vector<string> vs;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       string s;
       cin>>s;
       vs.push_back(s);
    }
    print_vec(vs);

    return 0;



}