// File reading and writing using open() ,close() and eof() functions
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample1.txt");
    out << "This is a file" << endl;
    out << "line no. 2" << endl;
    out << "line no. 3" << endl;
    out.close();
    ifstream in;
    string s, s2, s3;
    in.open("sample1.txt");
    // in>>s;
    // getline(in, s);
    // getline(in, s2);
    // getline(in, s3);
    // cout << s << endl;
    // cout << s2 << endl;
    // cout << s3 << endl;
    while (in.eof() == 0)
    {
        getline(in, s);
        cout << s << endl;
    }
    return 0;
}
// Terminal
// This is a file
// line no. 2
// line no. 3
