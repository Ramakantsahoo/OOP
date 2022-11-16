// Call by value call by reference.
#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
// This will not swap the values
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Call by reference using pointers
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by reference using c++ reference variables
void swaprefvar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 8;
    int b = 9;
    cout << "The sum is: " << sum(a, b) << endl;
    cout << "Before swaping: " << a << " " << b << endl;
    // swappointer(&a,&b);
    swaprefvar(a, b);
    cout << "After swaping: " << a << " " << b << endl;
}
// Terminal
// The sum is: 17
// Before swaping: 8 9
// After swaping: 9 8
