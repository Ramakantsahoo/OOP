// We can use constructor in derived class
// If base class constructor does not have any arguments, there is no need of any constructor in derived class
// But if there are arguments in base class constructor then derived class need to pass arguments to the base class constructor.
// If both base class and derived class have consturctor then base class constructor is executed first
// In multiple inheritance ,base classes are constructed in the order in which they appear in the class declaration 
// In multilevel inheritance ,the constructors are executed in the order of inheritance
// Special case of virtual base class
// The constructors for virtual base classes are invoked before an nonvirtual base class
// If there are multiple virtual classes, they are invoked in the order declared
// Any non-virtual base class are then constructed before the derived class constructor is executed
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int a;
        A(int x){
            a=x;
        }
        void display(){
            cout<<a<<endl;
        }
};
class B{
    public:
        int b;
        B(int x){
            b=x;
        }
        void display(){
            cout<<b<<endl;
        }
};
class C : public A,public B{    // Here in declaration A is declared first so A class constructor is initialized first
    public:
        int c;
        C(int a,int b,int c) : A(a),B(b) {
            this->c=c;
        }
        void display(){
            A :: display();
            B :: display();
            cout<<c<<endl;
        }
};
int main() {
    C c(4,5,6);
    c.display();
    return 0;
}
// Terminal
// 4
// 5
// 6