// WAP to find the largest three elements in the array.

#include <iostream>
#include <vector>
#include <limits.h> // for INT_MIN
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element : ";
    cin >> n;
    vector<int> v;
    v.resize(n); // Resize the vector to desired size.
    if (v.size() < 3)
    {
        cout << "Array must have at least three elements." << endl;
        return 1;
    };
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int num : v)
    {
        if (num > first)
        {
            third = second;
            second = first;
            first = num;
        }
        else if (num > second)
        {
            third = second;
            second = num;
        }
        else if (num > third)
        {
            third = num;
        }
    }

    cout << "The largest three elements are: " << first << ", " << second << ", and " << third << endl;

    return 0;
}