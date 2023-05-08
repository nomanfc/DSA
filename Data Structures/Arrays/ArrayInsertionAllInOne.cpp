#include<bits/stdc++.h>
using namespace std;

void DisplayArray(int * arr, int size)
{
    for(int i=0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void InsertAtBeginning(int *arr, int size)
{
    int value;

    cout << "Insert Value at beginning: ";
    cin >> value;

    for(int i=size; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[0] = value;
}

void InsertAtEnd(int * arr, int size)
{
    int value;
    cout << "Enter Value at End: ";
    cin >> value;

    arr[size] = value;
}

void InsertAtAnyPosition(int * arr, int &size)
{
    int pos, value, i;
    cout << "Enter Position : ";
    cin >> pos;

    if(pos > size+1 || pos < 1)
    {
        cout << "Array Index Out Of Bound!!" << endl;
    }
    else
    {
        if(pos == 1)
        {
            InsertAtBeginning(arr, size);
            size++;
        }
        else if (pos == size+1)
        {
            InsertAtEnd(arr, size);
            size++;
        }
        else
        {
            cout << "Enter Value for position " << pos << ": ";
            cin >> value;

            for(i = size; i>=pos-1; i--)
            {
                arr[i+1] = arr[i];
            }
            arr[pos-1] = value;
            size++;
        }

    }
}

int main ()
{
    int i, n, value ;
    cout << "Insert size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter "<< n << " Array Values : ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }



    InsertAtAnyPosition(arr,n);

    DisplayArray(arr, n);

    return 0;
}
