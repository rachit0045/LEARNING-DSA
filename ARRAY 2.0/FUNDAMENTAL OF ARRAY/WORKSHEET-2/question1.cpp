// Calculate the product of all the elements in the given array.

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
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }

    cout << "Product of element of array is : " << product << endl;
    return 0;
}