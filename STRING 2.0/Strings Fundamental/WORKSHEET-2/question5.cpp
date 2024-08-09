// Reverse the given string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :";
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << "Reversed string is " << s << endl;
    return 0;
}