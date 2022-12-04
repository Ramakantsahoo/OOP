// Template function
#include <iostream>
using namespace std;

template <class t3>

void swapp(t3 &x, t3 &y)
{
    t3 temp;
    temp = x;
    x = y;
    y = temp;
}
template <class t1, class t2>

float average(t1 a, t2 b)
{
    float avg;
    avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = average(5, 6);
    printf("Average is: %.3f\n", a);
    int x = 5;
    int y = 6;
    cout << x << " " << y << endl;
    swapp(x, y);
    cout << x << " " << y << endl;
    return 0;
}
// Terminal
// Average is: 5.500
// 5 6
// 6 5