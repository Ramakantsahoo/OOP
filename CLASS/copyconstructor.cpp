#include<bits/stdc++.h>
using namespace std;
class num{
    int n;
    public:
        num(){
            n=0;
        }
        num(int a){
            n=a;
        }
        num(num &obj){
            n=obj.n;
            cout<<"copy constructor is called."<<endl;
        }
        void display(){
            cout<<"The no. is: "<<n<<endl;
        }
};
int main() {
    num a,b,c(4),d,f;
    a.display();
    b.display();
    c.display();
    d=c; //Here copy constructor is not called
    d.display();
    num e=c; //Here copy constructor is called
    e.display();
    f=num(a);//Here copy constructor is called
    f.display();

    return 0;
}
// No need to call default constructor on main function
// when declaring constructor you always need to be create default constructor otherwise error
// Terminal
// The no. is: 0
// The no. is: 0
// The no. is: 4
// The no. is: 4
// copy constructor is called.
// The no. is: 4
// copy constructor is called.
// The no. is: 0