// Define a class student having name and roll no. as data members.Derive a class marks from student with data members to store marks of three different subjects.
// Derive a class result from marks having data members total and average.
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    char name[30];
    int roll;
    void input(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll no.: ";
        cin>>roll;
    }
};
class Marks : public Student{
public:
    float m1,m2,m3;
    void input(){
        cout<<"Enter marks of three subjects: ";
        cin>>m1>>m2>>m3;
    }
};
class Result : public Marks{
public:
    float avg;
    float total;
    void display(){
        cout<<"Total: "<<m1+m2+m3<<endl;
        cout<<"Average: "<<((m1+m2+m3)/3)<<endl;
    }
};
int main() {
    Result r;
    r.Student :: input();
    r.Marks :: input();
    r.display();
    return 0;
}
// Terminal
// Name: Rk
// Roll no.: 2102041050
// Enter marks of three subjects: 89 90 40
// Total: 219
// Average: 73
