// Templates with default data types
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = float>

class Data
{
    T1 data1;
    T2 data2;
    T3 data3;

public:
    Data(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << data1 << endl;
        cout << data2 << endl;
        cout << data3 << endl;
    }
};
int main()
{
    Data<char> d(4, 6.0, 7.6);
    d.display();
    return 0;
}
// Terminal
// ♦
// 6
// 7.6