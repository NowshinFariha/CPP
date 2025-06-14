#include<iostream>
using namespace std;

int main()
{
    int array[9]={12,18,19,15,3,17,21,31,23};
    int max= array[0];

    for(int i=0;i<9;i++)
    {
        if(max<array[i])
            max=array[i];
    }
    cout<<"the maximum array is:"<<max<<endl;

    return 0;
}
