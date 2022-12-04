#include <iostream>
using namespace std;
/*
Class templates with multiple(comma separated) parameters
template <class T1, class T2>
class nameOfclass{
    // Body
};
*/
template <class T1, class T2>
class Data
{
    T1 data1;
    T2 data2;

public:
    Data(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
    }
};
int main()
{
    Data<char, float> d('a', 6.7);
    d.display();
    return 0;
}
// Template
// a
// 6.7