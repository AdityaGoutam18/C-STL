#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << [](int x){ return x + 2; } // lambda function
    (2); // function call
    cout << endl;

    // reuse lambda function

    auto add = [](int x, int y){ return x + y; }(4, 5);
    cout << add;
}