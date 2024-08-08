//  Input a string and return the number of substrings that contain only vowels.

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int n = s.length();
    int count = 0;
    int current_vowel_sequence = 0;

    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            current_vowel_sequence++;
            count += current_vowel_sequence;
        } else {
            current_vowel_sequence = 0;
        }
    }

    cout << "Number of substrings containing only vowels: " << count << endl;
    return 0;
}
