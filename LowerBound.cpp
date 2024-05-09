#include <iostream>
using namespace std;

// Lower Bound only works with Sorted Array/Vectors
// time complexity :- O(logn)
int main()
{
    int arr[] = {4, 5, 5, 7, 8, 25, 3, 21, 12, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = lower_bound(arr, arr + n, 5); // lower bound will  find 5,if 5 is not present then the lower bound will find next greater than 5;
    cout << *ptr << endl;

    // we can restrict the range also

    int *str = lower_bound(arr + 4, arr + n, 26);
    if(str==(arr+n)){
        cout<<"element not found"<<endl;
    }else{
        cout << *str << endl;
    }

    // in case of Vector
    //  auto it=lower_bound(v.begin(),v.end(),5);
}