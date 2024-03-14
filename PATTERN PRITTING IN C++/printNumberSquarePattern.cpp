#include <iostream>
using namespace std;
int main()
{
    int r = 5;
    int c = 10;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}