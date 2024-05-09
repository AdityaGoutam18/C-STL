// use dto find the element in a given range
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 3, 11, 56, 32};
    auto it = find(v.begin(), v.end(), 4);
    if (it != v.end())
    {
        cout << (*it);
    }else{
        cout << "not found";
    }
}