// if want to return the maimum and minimum without iteration or traversing.
// use min_element()  or max_element()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto min = *min_element(v.begin(), v.end()); // returns the minimum element
    cout << min << endl;
    auto it = min_element(v.begin(), v.end()); // also returns the minimum element
    cout << *it << endl;

    int minimum = *min_element(v.begin(), v.end()); // also returns the minimum element;
    cout << minimum << endl;

    //-----------------------------------------------------------------------------------
    auto max = *max_element(v.begin(), v.end()); // returns the minimum element
    cout << max << endl;
    auto itr = max_element(v.begin(), v.end()); // also returns the minimum element
    cout << *itr << endl;

    int maximum = *max_element(v.begin(), v.end()); // also returns the minimum element;
    cout << maximum << endl;
}