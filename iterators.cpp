// points the element of containers

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={2,3,4,5,6,7};
     // declaratrion od iterators
     vector<int>::iterator it;
     it=v.begin();
    //  cout<<*it<<endl;
    //  it++;
    //  cout<<*it<<endl;
    //  it++;
    //  cout<<*it<<endl;

     // to print the whole vector using iterator

     for(it=v.begin();it<v.end();it++){
        cout<<*it<<endl;

     }

    // iterators points to pairs
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>::iterator it2;
    for(it2=v_p.begin();it2!=v_p.end();it2++){
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
        cout<<it2->first<<" "<<it2->second<<endl;

    }

    // iterators code in short 
    // range based loop

    for(int value:v){  // if dont want to copy values use refrence
        cout<<value<<" ";
    }

    vector<pair<int,int>> vop={{1,2},{2,3}};
    for(pair<int,int>&value:vop){
        cout<<value.first<<" "<<value.second<<endl;
    }

    
}
