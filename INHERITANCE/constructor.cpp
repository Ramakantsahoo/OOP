// Constructor in Inheritance
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
    A(int x)
    {
        a = x;
        cout<<"constructor of class A called."<<endl;
    }
    void display1()
    {
        cout << a << endl;
    }
};
class B
{
public:
    int b;
    B(int x)
    {
        b = x;
    }
    void display2()
    {
        cout << b << endl;
        cout<<"constructor of class B called."<<endl;
    }
};
class C : public A, public B
{
public:
    int m, n;
    C(int a, int b, int c, int d) : A(a), B(b)
    {
        m = c;
        n = d;
        cout<<"constructor of class C called."<<endl;
    }
    void display()
    {
        cout << m << endl;
        cout << n << endl;
    }
};
int main()
{
    C c(1,3,4,5);
    c.display1();
    c.display2();
    c.display();
    return 0;
}
// If you are doing explicit call then you have to make default constructs in every class.
// Terminal
// constructor of class A called.
// constructor of class C called.
// 1
// 3
// constructor of class B called.
// 4
// 5