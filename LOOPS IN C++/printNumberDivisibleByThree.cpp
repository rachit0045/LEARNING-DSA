#include <iostream>
using namespace std;
int main()
{
    cout << "Numbers from 1 to 100 divisible by 3 :"<<endl;
    for (int i = 1; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
}