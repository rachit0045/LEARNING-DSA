// Write a program to copy the contents of one array into another in the reverse order.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int reverseArr[n];
    // Copy elements from arr to reversedArr in reverse order
    for (int i = 0; i < n; ++i)
    {
        reverseArr[i] = arr[n - 1 - i];
    }
    cout << "Original array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Reversed array : ";
    for (int i = 0; i < n; i++)
    {
        cout << reverseArr[i] << " ";
    }
}