// Pure virtual function and abstract base class.
// Abstract base class is a base class where atleast one pure virtual fuction is their.
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
    virtual void display()=0; // Do nothing --> Pure virtual function
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