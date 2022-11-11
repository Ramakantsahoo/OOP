// Static variable and function
#include<bits/stdc++.h>
using namespace std;

class employee{
    int id;
    static int count;
    public:
        void input();
        void display();
        static void getcount(){
            cout<<"The value of count is : "<<count<<endl;
        }
};
int employee :: count;
void employee :: input(){
    cout<<"Enter employee id: ";
    cin>>id;
    count++;
}
void employee :: display(){
    cout<<id<<" is "<<count<<" no. employee."<<endl;
}
int main() {
    employee e;
    e.input();
    e.display();
    employee :: getcount();
    e.input();
    e.display();
    employee :: getcount();
    e.input();
    e.display();
    employee :: getcount();
    return 0;
}
// Terminal
// Enter employee id: 1
// 1 is 1 no. employee.
// The value of count is : 1
// Enter employee id: 23
// 23 is 2 no. employee.
// The value of count is : 2
// Enter employee id: 6
// 6 is 3 no. employee.
// The value of count is : 3