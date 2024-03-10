#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "enter the point(x,y) :";
    cin >> x, y;
    if (x == 0 && y == 0)
    {
        cout << "The point lies at the origin (0, 0)" << endl;
    }
    else if (x != 0 && y == 0)
    {
        cout << "The point lies at the x-axis" << endl;
    }
    else if (x == 0 && y != 0)
    {
        cout << "The point lies at the y-axis" << endl;
    }
    else
    {
        cout << "The point does not lie on the x-axis, y-axis, or at the origin";
    }
    return 0;
}