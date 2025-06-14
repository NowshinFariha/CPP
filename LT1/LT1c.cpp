#include<iostream>
using namespace std;
int main()
{
char Choice;
cout<<"Please input your Choice"<<endl;
cin>>Choice;

switch(Choice)
{
case 'Y':
    cout<<"the  statement is YES"<<endl;

case 'N':
    cout<<"the statement is NO"<<endl;

case 'M':
    cout<<"the statement is MAYBE NOT"<<endl;

default:
    cout<<"the statement is INVALID INPUT"<<endl;
    }
    return 0;
}
