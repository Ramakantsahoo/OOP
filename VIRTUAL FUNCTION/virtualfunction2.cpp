// Virtual function
#include <bits/stdc++.h>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        // cout<<"hello"<<endl;    // If display function is not defined in the derived class then base class display function is called (even if it is virtual)
    }
};
class Video : public CWH
{
protected:
    float videolength;

public:
    Video(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << title << endl;
        cout << rating << endl;
        cout << videolength << endl;
    }
};
class Text : public CWH
{
protected:
    int words;

public:
    Text(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << title << endl;
        cout << rating << endl;
        cout << words << endl;
    }
};
int main()
{
    CWH *ptr[2];
    Video v("abc", 5, 5.6);
    Text t("xyz", 5, 555);
    // ptr=&v;
    // ptr->display();
    // ptr=&t;
    // ptr->display();
    ptr[0] = &v;
    ptr[1] = &t;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}
// Terminal
// abc
// 5
// 5.6
// xyz
// 5
// 555

// Rules for virtual function
// 1. They can not be static.
// 2. They are accessed by object pointer.
// 3. Virtual function can be a friend of another class.
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is derived in the base class then no need to derive it in the derived class.