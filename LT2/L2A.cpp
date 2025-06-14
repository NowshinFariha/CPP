#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter the number till you want the fibonacci series"<<endl;
    cin>>n;
    int fibonacci[n], i;
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(i=2; i<n; i++)
    fibonacci[i] = fibonacci[i-2]+fibonacci[i-1];
    for (i=0; i<n; i++)
    cout<<"fibonacci["<<i<<"]="<<fibonacci[i]<<endl;
    return 0;
}

