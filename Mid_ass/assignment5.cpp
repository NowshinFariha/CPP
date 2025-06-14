#include<iostream>
using namespace std;
#include<string.h>

   char name [] = "Nowshin Fariha";
   char idNumber [] = "22-47074-1";
   char section [] = " B20";

int main()
{
       cout<<"Enter your name"<<endl;
cin>>name;
       cout<<"Enter your idNumber"<<endl;
cin>>idNumber;
       cout<<"Enter your section"<<endl;
cin>>section;

int len= strlen(name);
       cout<<"The length is: "<<len<<endl;
       cout<<"The copied form is: "<<strcpy(section,idNumber)<<endl;
if(strcmp(name,idNumber)==0)
{
       cout<<"They are equal"<<endl;
}
else
{
       cout<<"They are not equal"<<endl;
}
   cout<<"The consumption of the name is: "<<sizeof(name)<<" Byte(s)"<<endl;
   cout<<"The consumption of the Id is: "<<sizeof(idNumber)<<" Byte(s)"<<endl;
   cout<<"The consumption of the section is: "<<sizeof(section)<<" Byte(s)"<<endl;

   cout<<strcat(idNumber,section)<<endl;

   return 0;
}
