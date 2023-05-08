#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a[3][3] = {6,2,5,0,1,3,4,9,8};
    int i;

    int* p;
    p = a[0];

    // These will print the base address of 2D array a[3][3]
//    cout << a[0] << endl;
//    cout << &a[0][0] << endl;
//    cout << p << endl;
//    cout << a << endl;
//    cout << &a << endl;
//    cout << *a << endl;
//
//    cout << *(a +1) << endl;

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;

        cout << &a[0] + 2 << endl;

    return 0;
}
