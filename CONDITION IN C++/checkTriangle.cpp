#include <iostream>
using namespace std;
int main()
{
    float s1, s2, s3;
    cout << "enter the first side of triangle :";
    cin >> s1;
    cout << "enter the second side of triangle :";
    cin >> s2;
    cout << "enter the third side of triangle :";
    cin >> s3;
    if (s1 == s2 && s2 == s3 && s3 == s1)
    {
        cout << "Triangle is Equilateral ." << endl;
    }
    else if (s1 != s2 && s2 != s3 && s3 != s1)
    {
        cout << "Triangle is Scalene ." << endl;
    }
    else
    {
        cout << "Triangle is Isosceles ." << endl;
    }
    return 0;
}