#include<iostream>
using namespace std;
int main()
{
    int term = 100;
    cout<<"Arithmetic Progression terms starting from 100 : ";
    while (term>0)
    {
        cout<<term;
        if (term>3)
        {
            cout<<",";
        }
        term = term-3;
        
    }
    return 0;
}