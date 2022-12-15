// Q.Write a program to overload += operator for concatenating two strings using member function.
#include <bits/stdc++.h>
using namespace std;
class cc
{
    char c[35];

public:
    cc(char x[])
    {
        strcpy(c, x);
    }
    void operator+=(cc a)
    {
        strcat(this->c, a.c);
    }
    void display()
    {
        cout << c << endl;
    }
};
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