// Given an array arr. Your task is to find the elements whose value is equal to that of its index value.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements whose value is equal to their index value: ";
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
        {
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found)
    {
        cout << "None";
    }

    return 0;
}