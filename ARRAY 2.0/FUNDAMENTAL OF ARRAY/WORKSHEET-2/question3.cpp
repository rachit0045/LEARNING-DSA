// Given an array, predict if the array contains duplicates or not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the element of array : " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool duplicate = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }
    }
    if (duplicate)
    {
        cout << "The array contains duplicates." << endl;
    }
    else
    {
        cout << "The array does not contain duplicates." << endl;
    }

return 0;
}