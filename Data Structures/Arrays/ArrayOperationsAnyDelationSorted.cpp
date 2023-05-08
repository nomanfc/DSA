
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

    cout << "Enter Delation Position : ";
    cin >> pos;


    if(pos < n)
    {
        for(i = pos-1; i<= n-1; i++)
        {
            a[i] = a[i+1];
        }

        n--;


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

