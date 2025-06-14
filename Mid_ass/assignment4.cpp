#include<iostream>
using namespace std;

int main()
{
int size;
cout<<"Enter the size of number"<<endl;
cin>>size;
int number[size];
cout<<"The number is"<<endl;
for(int i=0; i<size; i++)
{
cin>>number[i];
}
cout<<"THe number are"<<endl;

for(int i=0; i<size; i++)
{
cout<<number[i]<<endl;
}
cout<<"Printed how many number even or odd"<<endl;

int countEven=0; int countOdd=0;

for(int i=0; i<size; i++)
{
if(number[i]%2==0)
countEven++;
else
countOdd++;
}
cout<<"The number of even is: "<<countEven<<endl;

cout<<"The number of odd is: "<<countOdd<<endl;
return 0;
}
