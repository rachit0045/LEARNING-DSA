#include <iostream>
using namespace std;
int main()
{
    int r = 3;
    int c = 6;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}