#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms :";
    cin >> n;
    int firstterm = 1;
    int commondifference = 2;
    cout << "Arthmetic progression :";
    for (int i = 0; i < n; i++)
    {
        cout << firstterm + i * commondifference;
        if (i != n - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
    return 0;
}