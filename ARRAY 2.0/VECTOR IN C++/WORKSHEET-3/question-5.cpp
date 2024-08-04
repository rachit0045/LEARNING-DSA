// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    v.resize(n); // resize the vector to desired size.
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 != 0)
        {
            // Change odd indexed values to its second multiple.
            v[i] *= 2;
        }
        else
        {
            // Increment even indexed values by 10.
            v[i] += 10;
        }
    }
    // Print the modified vector
    cout << "updated array : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}