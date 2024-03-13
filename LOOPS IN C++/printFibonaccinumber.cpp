#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int prev = 0, current = 1, next;

    if (n == 0)
    {
        cout << "The 0th Fibonacci number is: " << prev << endl;
    }
    else if (n == 1)
    {
        cout << "The 1st Fibonacci number is: " << current << endl;
    }
    else
    {
        for (int i = 2; i <= n; ++i)
        {
            next = prev + current;
            prev = current;
            current = next;
        }
        cout << "The " << n << "th Fibonacci number is: " << current << endl;
    }

    return 0;
}
