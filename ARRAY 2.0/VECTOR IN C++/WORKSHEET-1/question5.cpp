// Implement a program that takes n integers as input from the user, stores them in a vector, and sorts the vector in ascending order using the sort function.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element : ";
    cin >> n;
    cout << "Enter the element of vector : " << endl;
    vector<int> myvector(n);
    for (int i = 0; i < n; i++)
    {
        cin >> myvector[i];
    }
    // Sort the vector in ascending order
    sort(myvector.begin(), myvector.end());
    // Print the sorted vector
    cout << "The sorted vector is: ";
    for (int i = 0; i < n; i++)
    {
        cout << myvector[i] << " ";
    }

    return 0;
}