#include<iostream>
using namespace std;
float mul(float x,float y)
{
    cout<<x*y;
}
int sub (int x,int y)
{
    cout<<x-y;
}
float division (float x,float y)
{
    cout<<x/y;
}
int main()
{
    cout<<"the multiplication is:"<<endl;
    mul(5.5,10.5);
cout<<endl;
    cout<<"the subtraction is:"<<endl;
    sub(10,15);
cout<<endl;
    cout<<"the division is:"<<endl;
    division(4.4,8.4);
cout<<endl;
    return 0;
}


