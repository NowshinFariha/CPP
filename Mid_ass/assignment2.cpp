#include<iostream>
using namespace std;

int main()
{
    int size,array[size],i;
    cout<<"please input the size of the array"<<endl;
    cin>>size;

    cout<<"input the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"print the array:"<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<"\t";

    }
    cout<<endl;
    cout<<"the reverse of array is"<<endl;
    for(int i=size-1;i>=0;i--)
    {
        cout<<array[i]<<"\t";
    }
    return 0;
}
