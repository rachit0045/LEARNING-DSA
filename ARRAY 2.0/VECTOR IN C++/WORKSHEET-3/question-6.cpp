// If an array arr contains n elements, then check if the given array is a palindrome or not.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    arr.resize(n); // resize the vector to desired size.
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    bool is_palindrome = true;
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            is_palindrome = false;
            break;
        }
        ++left;
        --right;
    }

    if (is_palindrome)
    {
        cout << "The array is a palindrome." << endl;
    }
    else
    {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
