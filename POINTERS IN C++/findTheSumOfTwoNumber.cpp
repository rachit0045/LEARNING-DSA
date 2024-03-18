#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter the first number :";
    cin >> num1;
    cout << "enter the second number :";
    cin >> num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int sum = (*ptr1) + (*ptr2);
    cout << "Sum of two number is :" << sum << endl;
    return 0;
}