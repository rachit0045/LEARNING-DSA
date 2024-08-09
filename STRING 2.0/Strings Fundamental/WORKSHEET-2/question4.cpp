// Find the length of string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << "Length of string is " << s.length() << endl;
    return 0;
}