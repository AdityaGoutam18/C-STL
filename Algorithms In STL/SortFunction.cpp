#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {3, 1, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); // sort function
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
    // in case of vectors
    vector<int> v = {3, 5, 7, 21, 4};
    sort(v.begin(), v.end());
    for (int value : v)
    {
        cout << value << " ";
    }
}