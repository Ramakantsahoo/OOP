// Templates
// Class --> Object
// Template --> Class
// Templates are used for DRY(Donot repeat yourself) and Generic programming

#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 0;
    // v1.arr[2] = 5;
    // vector v2(3);
    // v2.arr[0] = 3;
    // v2.arr[1] = 44;
    // v2.arr[2] = 4;
    vector<double> v1(3);
    v1.arr[0] = 4.5;
    v1.arr[1] = 0.2;
    v1.arr[2] = 5.2;
    vector<double> v2(3);
    v2.arr[0] = 3.1;
    v2.arr[1] = 4.0;
    v2.arr[2] = 4.0;
    double a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}
// Terminal
// 35.55
