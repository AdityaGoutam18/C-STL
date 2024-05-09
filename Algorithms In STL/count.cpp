// return count of elements

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2,3,1,6,7,6};
    int ct = count(v.begin()+2, v.end(), 2);
    cout << ct;
}