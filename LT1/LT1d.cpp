#include<iostream>
using namespace std;
int main()
{
    int n,sum=0, i;
    cout<<"Enter your number: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
        cout<<i;
        if(i==n)
        {
            break;
        }
        else
        {
            cout<<"+";
        }

    }
    cout<<"="<<sum;
}
