#include<iostream>
using namespace std;
int myArrayFunc(float myarr[],int size)
{
for(int i=0;i<size;i++)
{
cin>>myarr[i];
}
}
int main()
{
int x;
cout<<"enter the size is:"<<endl;
cin>>x;
cout<<endl;
float myArray[x];
cout<<"elements are:"<<endl;
myArrayFunc(myArray,x);
cout<<endl;
cout<<"showing the array"<<endl;
for(int i=0;i<x;i++)
{
cout<<myArray[i]<<"\t";
}
}
