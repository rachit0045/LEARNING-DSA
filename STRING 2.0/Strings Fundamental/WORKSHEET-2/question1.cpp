// Input a string and concatenate with its reverse string and print it.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1;
    cout << "Enter the string : ";
    getline(cin, s1);
    int n = s1.length();
    // Create a reversed copy of s1.
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    // Concatenate the original string with the reversed string.
    string s3 = s1 + s2;
    // print concatenate string.
    cout << s3 << endl;
    return 0;
}