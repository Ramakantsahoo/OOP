// Q.Write a program to overload += operator for concatenating two strings using friend function.
#include <bits/stdc++.h>
using namespace std;
class cc
{
    char c[35];

public:
    cc() {}
    cc(char x[])
    {
        strcpy(c, x);
    }
    friend void operator+=(cc &a, cc b);
    void display()
    {
        cout << c << endl;
    }
};
void operator+=(cc &a, cc b)
{
    strcat(a.c, b.c);
}
int main()
{
    char x[] = "RK";
    char y[] = "S";
    cc a(x);
    cc b(y);
    a += b;
    a.display();
    return 0;
}
// Terminal
// RKS