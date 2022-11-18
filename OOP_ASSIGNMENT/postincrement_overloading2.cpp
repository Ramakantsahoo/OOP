// Postincrement operator overloading.Using member function.
#include<bits/stdc++.h>
using namespace std;
class Number{
    int a,b;
    public:
        Number(){}
        Number(int x,int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        }
        friend Number operator ++(Number &,int);
};
Number operator ++(Number& n,int){
    Number temp;
    temp.a=n.a++;
    temp.b=n.b++;
    return temp;
}
int main() {
    Number n(4,5);
    n.display();
    Number n2;
    n2=n++;
    n2.display();
    n.display();
    return 0;
}
// Terminal
// 4 5
// 4 5
// 5 6