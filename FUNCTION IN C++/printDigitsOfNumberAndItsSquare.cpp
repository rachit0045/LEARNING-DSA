#include <iostream>
using namespace std;
void countdigitsandsquare(int num)
{
    int count = 0;
    int temp = num;
    // count the digit of number
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    // square of number
    int square = num * num;
    cout << "number of digits in " << num << " is :" << count << endl;
    cout << "square of " << num << " is :" << square << endl;
}

int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    countdigitsandsquare(n);
    return 0;
}