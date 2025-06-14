#include<iostream>
using namespace std;
int main()
{
    int i,run=10,arr[run];
    cout<<"please input of runs in last 10 ODI match for sakib al hasan:"<<endl;

    for(i=0; i<run; i++)
    {
        cin>>arr[i];
    }
     cout<<arr[i];
int totalrun=0;
   for(int i=0;i<10;i++)
{
    totalrun=totalrun+arr[i];
}
cout<<"the total run is:"<<totalrun<<endl;

    float average=(float)totalrun/10;
    cout<<"the average of shakib al hasan is:"<<average<<endl;

    if(totalrun%2==0)
    {
        cout<<"the totalrun is even"<<endl;
    }
    else
    {
        cout<<"the totalrun is odd"<<endl;
    }
    return 0;

}
