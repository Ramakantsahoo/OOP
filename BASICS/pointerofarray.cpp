// Pointer to array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // Pointers and arrays
    int *p = a; // Here p stores address of starting of array
    // cout << *p << endl;
    // cout << *(p + 1) << endl;
    for(int i=0;i<4;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    cout << p << endl;
    cout << p + 1 << endl;
}
// Terminal
// 1 2 3 5

// 1 2 3 5
// 1 2 3 5
// 0x61fef0
// 0x61fef4