// Class 
#include <bits/stdc++.h>
using namespace std;
// :: is scope resolution operator
class A
{
    int a, b, c;

public:
    int d, e;
    void setdata(int, int, int);
    void getdata()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};
void A ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    A r;
    r.d = 5;
    r.e = 5;
    // r.a=5; r.a is inaccessible because a is declared in private
    r.setdata(4, 5, 7);
    r.getdata();
}
// Terminal
// 4
// 5
// 7
// 5
// 5
