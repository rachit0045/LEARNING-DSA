// Take a string and convert it into upper case

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :";
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "Converted string : " << s << endl;
    return 0;
}
