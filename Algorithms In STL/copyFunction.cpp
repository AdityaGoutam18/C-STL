// copy a range of elements to another container uisng iterator
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2(v1.size());

    copy(v1.begin()+2, v1.end()-1, v2.begin());  // we can from a range
    for (auto i : v2)
    {
        cout << i << " ";
    }
}