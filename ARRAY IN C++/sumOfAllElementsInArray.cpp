#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    cout << sum << " is the sum of all elements in array .";
    return 0;
}