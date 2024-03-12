#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms :";
    cin>>n;
    int firstterm= 1;
    int commonratio = 2;
    cout<<"Geometric progression :";
    for (int i = 0; i < n; i++)
    {
        int term = firstterm * pow(commonratio,i);
        cout<<term;
        if (i!=n-1)
        {
            cout<<",";
        }
        
    }
    return 0;

    
}