// Virtual base class occurs when we have multipath inheritance.
#include<bits/stdc++.h>
using namespace std;
class A{
public:
    int a;
    void getdata(int x){
        a=x;
    }     
    void display(){
        cout<<a<<endl;
    }
};
class B : public A{
public:
    int b;
    void getdata(int x){
        b=x;
    }     
    void display(){
        cout<<b<<endl;
    }
};
class C : public A{
public:
    int c;
    void getdata(int x){
        c=x;
    }     
    void display(){
        cout<<c<<endl;
    }
};
class D : public C,public B{
public:
    int d;
    void getdata(int x){
        d=x;
    }     
    void display(){
        cout<<d<<endl;
    }
};

int main() {
    D d;
    A a;
    a.getdata(9);
    a.display();
    d.B :: getdata(5);
    d.B :: display();
    d.C :: getdata(4);
    d.C :: display();
    d.getdata(3);
    d.display();
    return 0;
}
// Here we can not acces class A by class D.
// Terminal
// 9
// 5
// 4
// 3