// Check if the given array is sorted or not.

#include <iostream>
#include <vector>
#include <algorithm> // for is_sorted
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    v.resize(n); // Resize the vector to desired size.
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    if (v.empty())
    {
        cout << "Array is empty ." << endl;
        return 1;
    }
    // check array is empty or not.
    if (is_sorted(v.begin(), v.end()))
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
