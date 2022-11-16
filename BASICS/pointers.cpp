#include <bits/stdc++.h>
using namespace std;
int main()
{
    // What is pointer ?
    // Pointer is a variable which stores memory address of another variable as its value
    int a = 9;
    int *b = &a;
    // & ------>(Address of) operater
    cout << b << endl;
    cout << &a << endl;
    // * ----->(Value of) operater
    cout << *b << endl;
    // Pointer to pointer
    int **c = &b;
    cout << &b << endl;
    cout << c << endl;
    cout << **c << endl;
    cout << *c << endl;
    return 0;
}
// Array is a collection of similar type of data stored in contiguous memory location
// Terminal
// 0x61ff08
// 0x61ff08
// 9
// 0x61ff04
// 0x61ff04
// 9
// 0x61ff08