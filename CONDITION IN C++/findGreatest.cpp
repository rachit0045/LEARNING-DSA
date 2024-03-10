#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"enter the length :";
    cin>>l;
    cout<<"enter the breadth :";
    cin>>b;
    float aofr = (l*b); //area of rectangle formula
    float pofr = (2*(l+b)); //perameter of rectangle formula
    cout<<"area of rectangle is :"<<aofr<<endl;
    cout<<"perametr of rectangle is : "<<pofr<<endl;
    if (aofr>pofr )
    {
        cout<<"area of rectangle  is greater than perameter of rectangle ."<<endl;
    }
    else{
        cout<<"area of rectangle  is not greater than perameter of rectangle .";
    }
    return 0;
    
}