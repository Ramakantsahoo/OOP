#include <iostream>
using namespace std;

template <class T>
class Data
{
    T data;

public:
    Data(T t)
    {
        data = t;
    }
    void display();
};

template <class T>
void Data<T>::display()
{
    cout << data << endl;
}

void function(int a)
{
    cout << "This is my 1st function: " << a << endl;
}
template <class t>
void function(t a)
{
    cout << "This is my template function: " << a << endl;
}
int main()
{
    Data<char> d('c');
    d.display();
    function(6); // If exact match found then it is called
    return 0;
}
// Terminal
// c
// This is my template function: 6