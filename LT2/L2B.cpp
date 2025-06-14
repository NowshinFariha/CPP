#include <iostream>
using namespace std;

int main()

{
    int size,value,arr[12];

    cout<<"please input the size of the array:"<<endl;
    cin>>size;

    cout<<"please input the values of the array :"<<endl;

    for(value=0; value<size; value++)
    cin>>arr[value];

    int sum=0;
    for(value=0; value<size; value++)
    {
        sum=sum+arr[value];
    }
    cout<<"sum is:"<<sum;

    return 0;

}
