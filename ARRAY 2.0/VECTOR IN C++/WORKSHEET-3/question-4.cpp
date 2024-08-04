// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of element : ";
    cin >> n;
    v.resize(n); // Resize the vector to desired size.
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            sumEven += v[i];
        }
        else if (i % 2 != 0)
        {
            sumOdd += v[i];
        }
    }
    // difference between the sum of elements at even indices to the sum of elements at odd indices.
    int difference = sumEven - sumOdd;
    cout << "Difference is : " << difference << endl;

    return 0;
}