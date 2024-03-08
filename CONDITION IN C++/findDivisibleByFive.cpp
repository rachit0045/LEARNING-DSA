#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    if (num%5==0)
    {
        cout<<num<<" is divisible by 5"<<endl;
    }
    else{
        cout<<num<<"This number is not divisible by 5"<<endl;
    }
    return 0;
    
}