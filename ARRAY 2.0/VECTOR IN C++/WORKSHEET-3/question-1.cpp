// Count the number of elements strictly greater than x.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v;
    v.resize(n); // Resize the vector to the desired size.
    int x;
    cout << "Enter the value of x : ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            count++;
        }
    }

    cout << "Number of element grather than " << x << " is :" << count << endl;

    return 0;
}