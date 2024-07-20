// Find the minimum value out of all elements in the array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid array size." << endl;
        return 1;
    }
    cout << "Enter the element of array : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum value in the array is : " << min << endl;
    return 0;
}