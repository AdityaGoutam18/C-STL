#include <iostream>
#include <algorithm>
using namespace std;

// Upper Bound only works with Sorted Array/Vectors
// time complexity :- O(logn)
int main()
{
    int arr[] = {4, 5, 5, 7, 8, 25, 3, 21, 12, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = upper_bound(arr, arr + n, 5); // upper bound will always return the one grater element if element is althoug present
    cout << *ptr << endl;

    // we can restrict the range also

    int *str = upper_bound(arr + 4, arr + n, 25);
    if(str==(arr+n)){
        cout<<"element not found"<<endl;
    }else{
        cout << *str << endl;
    }

    // in case of Vector
    //  auto it=upper_bound(v.begin(),v.end(),5);
}