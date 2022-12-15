#include <bits/stdc++.h>
using namespace std;
class Number
{
    int a, b, c;

public:
    void setdata(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    int largest()
    {
        int large;
        large = (a > b) ? a : b;
        large = (large > c) ? large : c;
        return large;
    }
    void display()
    {
        cout << "The largest no. is: " << largest() << endl;
    }
};
int main()
{
    Number n;
    n.setdata(5, 8, 3);
    n.display();
    return 0;
}
// Terminal
// The largest no. is: 8