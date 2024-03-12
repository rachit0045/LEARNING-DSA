#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of term : ";
    cin>>n;
    int firstterm = 3;
    int commonratio = 4;
    cout<<"Geometric progression :";
    for (int i = 0; i < n; i++)
    {
        int terms = firstterm * pow(commonratio,i);
        cout<<terms;
        if (i!=n-1)
        {
            cout<<",";
        }
        
    }
    return 0 ;
}