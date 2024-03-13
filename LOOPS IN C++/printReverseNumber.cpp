#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    int reversenum = 0;
    while (num != 0)
    {
        int reminder = num % 10;
        reversenum = reversenum * 10 + reminder;
        num /= 10;
    }
    cout << "Reversed number is :" << reversenum;
    return 0;
}