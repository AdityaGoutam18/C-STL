// return True/False
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-1, 2, -3, -4};
    cout << none_of(v.begin(), v.end(), [](int x){ return x > 0; });

    // if all of them false it will return true
    // if one of them true it will return false
}