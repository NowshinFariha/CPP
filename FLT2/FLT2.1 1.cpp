#include<iostream>
using namespace std;
class Square
{
private:
float length;
public:
void setLength(float lt)
{
length = lt;
} void setData(float lt)
{
length=lt;
}
float getLength()
{
return length;
}
float getArea()
{
return length*length;
}};
int main()
{
Square s;
s.setLength(17.89);
cout<<"The length is :"<<s.getLength()<<endl;cout<<"The area is:"<<s.getArea()<<endl;
}
