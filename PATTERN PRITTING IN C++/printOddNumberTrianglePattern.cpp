#include <iostream>
using namespace std;
int main()
{
    int r = 4;

    for (int i = 1; i <= r; i++)
    {
        int num = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num += 2;
        }
        cout << endl;
    }
    return 0;
}