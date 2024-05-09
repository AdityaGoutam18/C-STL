// return True/False
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-1, 2, 3, 4};
    cout << any_of(v.begin(), v.end(), [](int x){ return x > 0; });
    // it will return false ony if all of them false
    // if one of them is true it will return true

    // 0   0  --> 0
    // 0   1  --> 1
    // 1   0  --> 1
    // 1   1  --> 1
}