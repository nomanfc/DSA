#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr [5] = {6, 2, 1, 5, 3};
    int *p;
    p = arr;

//    These are same ...
//    cout << arr[1] << endl;
//    cout << *(arr+1) << endl ;
//    cout << *(1+arr) << endl ;
//    cout << 1[arr] << endl ;
//
//    cout << arr+1 << endl;
//    cout << &arr + 1 << endl;
//    cout << *(arr+1) << endl;
//    cout << *arr+1 << endl;

    cout << &arr[0] << endl;
    cout << (&arr[0]+1) << endl;

    return 0;
}
