// this pointer
#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

public:
    void input(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    // Static member function do not have a member function
    A x;
    x.input(5);
    x.display();
    return 0;
}
// Terminal
// The value of a is: 5