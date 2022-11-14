// Swapping two numbers.
#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
    void swapp();
};
void A ::swapp()
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    A a;
    a.setdata(5, 6);
    a.display();
    a.swapp();
    a.display();
    return 0;
}
// Terminal
// 5 6
// 6 5
