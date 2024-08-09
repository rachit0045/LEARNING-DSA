// Take a string having @ replace all the @ with space

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // Replace all '@' with ' '(space)
    replace(s.begin(), s.end(), '@', ' ');
    cout << "Modified string: " << s << endl;

    return 0;
}
