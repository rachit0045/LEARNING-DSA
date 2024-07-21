// Create a program that initializes a vector with some values. Use a for loop to print all the elements of the vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // initialize a vector
    vector<int> myvector = {2, 4, 5, 8, 7};
    // print all element of vector
    cout << "Vector contains : " << endl;
    for (int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << " ";
    }
    return 0;
}