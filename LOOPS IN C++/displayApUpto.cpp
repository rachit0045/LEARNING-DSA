#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of term";
    cin >> n;
    int firstterm = 4;
    int commondifference = 3;
    cout << "Arthmetic progression : ";
    for (int i = 0; i < n; i++)
    {
        cout<<firstterm + i * commondifference;
        if (i != n - 1)
        {
            cout << ",";
        }
    }
    return 0;
}