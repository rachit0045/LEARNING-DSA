#include <iostream>
using namespace std;
int main()
{
    int arr[100], size;
    cout << "Enter the size of array :";
    cin >> size;
    int max_value = arr[0];
    cout << "Enter the elements of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < max_value)
        {
            max_value = arr[i];
        }
    }
    cout << "Maximum value in the array: " << max_value << endl;
    return 0;
}