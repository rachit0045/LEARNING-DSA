// How can we use it to find the Length of array? Memory allocation in array//

#include <iostream>
using namespace std;
int main()
{
    // Declare and initialize an array
    int arr[5] = {10, 20, 30, 40, 50};

    // Calculate the number of elements in the array
    int length = sizeof(arr) / sizeof(arr[0]);

    // Print the length of the array
    cout << "The length of the array is: " << length << endl;

    return 0;
}