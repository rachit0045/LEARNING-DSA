// Two Pointers : Write a program to reverse the array without using any extra array.

#include <iostream>
#include <vector>
using namespace std;
// function for display/print the array elements.
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
// Function to reverse the array in place
void reverseArray(vector<int> &a)
{
    int start = 0;
    int end = a.size() - 1;
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> v1;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    v1.resize(n); // Resize the vector to the desired size
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    cout << "original array : ";
    // Display the array
    display(v1);
    cout << endl;
    // Reverse the array
    reverseArray(v1);

    cout << "Reversed array: ";
    display(v1);

    return 0;
}