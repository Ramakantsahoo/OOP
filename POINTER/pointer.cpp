// Pointer basics
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Basic example
    int a = 4;
    int *b = &a;
    cout << "The value of a is: " << a << endl;
    cout << "The address of a is: " << b << endl;
    cout << "The value of a is: " << *b << endl;
    cout << endl;

    // New operator
    int *x = new int(50);
    cout << "The value of x is: " << int(50) << endl;
    cout << "The address of x is: " << x << endl;
    cout << "The value of x is: " << *x << endl;

    int *arr = new int[5];
    cout << "Enter array of size 5" << endl;
    for (int i = 0; i < 5; i++)
    {
        // cin>>arr[i];
        cin >> *(arr + i);
    }
    cout << "The array is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        // cout<<*(arr+i)<<" ";
    }
    cout << endl;

    // Delete operator
    delete[] arr;
    cout << "After delete operation ";
    cout << "The array is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
// Terminal
// The value of a is: 4
// The address of a is: 0x61fef4
// The value of a is: 4

// The value of x is: 50
// The address of x is: 0xff7f18
// The value of x is: 50
// Enter array of size 5
// 1 2 3 4 5
// The array is:
// 1 2 3 4 5
// After delete operation The array is:
// 16744328 16711872 3 4 5
