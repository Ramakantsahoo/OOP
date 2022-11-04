// Write a program to define a class basic information having data members roll no. and name.Derive a class additional information from it having data members age 
// and height.Define appropriate member functions to read and display informations.
#include<bits/stdc++.h>
using namespace std;
class Basicinfo{
public:
    int roll;
    char name[30];
    void getdata(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll no.: ";
        cin>>roll;
    }    
    // void display(){
    //     cout<<"Name: "<<name<<endl;
    //     cout<<"Roll no.: "<<roll<<endl;
    // }
};
class Addinfo : public Basicinfo{
public:
    int age;
    int height;
    void getdata(){
        cout<<"Age: ";
        cin>>age;
        cout<<"Height: ";
        cin>>height;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Height: "<<height<<endl;
    }
};
int main() {
    Addinfo a;
    a.Basicinfo :: getdata();
    // a.Basicinfo :: display();
    a.getdata();
    a.display();
    return 0;
}
// Terminal
// Name: Ramakant
// Roll no.: 2102041050
// Age: 19
// Height: 173
// Name: Ramakant
// Roll no.: 2102041050
// Age: 19
// Height: 173
