
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, pos, val;
    cout << "Enter Size of Array: ";
    cin >> n;
    int a[n];

    cout << "Enter Elements of Array: ";
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter The Position : ";
    cin >> pos;
    cout << "Enter The value : ";
    cin >> val;

    if(pos < n)
    {
        a[n] = a[pos-1];
        a[pos-1] = val;
        n++;


        cout << "New Updated Array: ";
        for(i=0; i<n; i++)
        {
            cout << a[i] << " " ;
        }
    }
    else
    {
        cout << "Invalid Position!";
        return 0;
    }

    return 0;
}
