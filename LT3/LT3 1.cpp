#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"the size is :";
    cin>>size;

    int MyArray[size],i;
    for(i=0; i<size; i++)
    {
        cout<<"the elements of the array are:"<<i<<endl;
        cin>>MyArray[i];
    }

    for(i=0; i<size; i++)

        cout<<"MyArray ["<<i<<"] :"<<MyArray[i]<<endl;
    cout<<"Elements in reverse order:"<<endl;

    for(i=size-1; i>=0; i--)

        cout<<"MyArray in reverse order ["<<i<<"] :"<<MyArray[i]<<endl;
   cout<<"printing the minimum number:"<<endl;

   int min;
   min=MyArray[0];

   for(i=0; i<size; i++)
   {
       if(min>MyArray[i])
       {
           min=MyArray[i];
       }
   }
    cout<<"The min MyArray :"<<min<<endl;
    return 0;
}
