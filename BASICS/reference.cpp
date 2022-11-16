// Reference
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 90;
    int &y = x;
    cout << x << endl;
    cout << y << endl;
    cout << &y << endl;
    return 0;
}
// Terminal
// 90
// 90
// 0x61ff08