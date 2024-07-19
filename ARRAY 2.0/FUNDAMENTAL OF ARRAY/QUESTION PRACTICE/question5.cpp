// Find the second largest element in the given Array

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // finding the second largest element
    int largest = INT16_MIN;
    int second_largest = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > second_largest && arr[i] < largest)
            {
                second_largest = arr[i];
            }
        }
    }
    cout << "Second largest element is : " << second_largest;
    return 0;
}