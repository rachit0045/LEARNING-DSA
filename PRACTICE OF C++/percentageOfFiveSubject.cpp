#include <iostream>
using namespace std;
int main()
{
    double sub1,sub2,sub3,sub4,sub5;
    cout<<"enter the marks of subject 1 :";
    cin>>sub1;
    cout<<"enter the marks of subject 2 :";
    cin>>sub2;
    cout<<"enter the marks of subject 3 :";
    cin>>sub3;
    cout<<"enter the marks of subject 4 :";
    cin>>sub4;
    cout<<"enter the marks of subject 5 :";
    cin>>sub5;
    double Totalmarksobtained = sub1+sub2+sub3+sub4+sub5;
    double totalmarks = 5*100;
    double percentage =(Totalmarksobtained/totalmarks)*100;
    cout<<"percentage of 5 subject is :"<<percentage<<"%"<<endl;
    return 0;
}