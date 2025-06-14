#include<iostream>
using namespace std;
int main()
{
    int var1,var2,sum,sub,mul;
    cout<<"Enter two variable"<<endl;
    cin>>var1>>var2;

    sum = var1 + var2;
    cout<<"the total sum is:"<<sum<<endl;

    sub = var1 - var2;
    cout<<"the total sub is:"<<sub<<endl;

    mul = var1 * var2;
    cout<<"the total mul is:"<<mul<<endl;

    float div;

    div = (float) var1 / var2;
    cout<<"the total div is:"<<div<<endl;

    return 0;
}
