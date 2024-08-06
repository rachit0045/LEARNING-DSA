// Input a string of even length and reverse the second half of the string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    int n = s.length();
    if (n % 2 != 0)
    {
        cout << "Please enter the even length of string !" << endl;
        return 1;
    }
    int mid = n / 2;
    reverse((s.begin() + mid), s.end());
    cout << "Reversed string is : " << s << endl;

    return 0;
}