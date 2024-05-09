// reverse a vector/array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(v.begin(), v.end()); // reverse on vector
    reverse(arr, arr + n);       // reverse on array

    for (int vec : v)
    {
        cout << vec << " ";
    }
    cout << endl;

    for (int array : arr)
    {
        cout << array << " ";
    }
}