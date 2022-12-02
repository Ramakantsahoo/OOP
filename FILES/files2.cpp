// File reading and writing.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s1;
    ofstream out("sample1.txt"); // Make a link to the file sample1.txt.
    cout << "Enter a string: ";
    cin >> s1;
    out << s1;
    out.close();
    string s2;
    ifstream in("sample1.txt");
    // in>>s2;
    getline(in, s2);
    cout << "The content in the file is: " << s2;
    in.close();
    return 0;
}
// Terminal
// Enter a string: Ramakant 
// The content in the file is: Ramakant