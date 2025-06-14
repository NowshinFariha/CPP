#include<iostream>
using namespace std;
int equationC (int k)
{
int c;
c=k-273;
return(c);
}
int main()
{
    int k;
    cout<<"the value of k:"<<endl;
    cin>>k;
    cout<<"the value of c :"<<endl;
   cout<<equationC(k);
    return 0;
}


