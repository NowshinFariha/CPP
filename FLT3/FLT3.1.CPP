#include<iostream>
using namespace std;
class Shape
{
protected:
    float length; float height;
public:
    Shape()
    {
        cout<<"Shape Empty constructor"<<endl;
    }
    Shape(float lt, float ht)
    {
        length=lt;
        height=ht;
        cout<<"Shape Parameterized constructor"<<endl;
    }
    void setData (float lt, float ht)
    {
        length=lt;
        height=ht;
    }
    void showDetails()
    {
        cout<<"Length= "<<length<<" and height= "<<height<<endl;
    }
    ~Shape()
    {
        cout<<"Shape destroyed"<<endl;
    }
};
class Triangle: public Shape
{
protected:
    float base;
public:
    Triangle()
    {
        cout<<"Triangle Empty constructor"<<endl;
    }
    Triangle(float b, float ht): Shape(b,ht)
    {
        base=b;
        cout<<"Triangle parametrized constructor"<<endl;
    }
    float TriangleArea()
    {
        return 0.5*base*height;
    }
};
class Square: public Shape
{
public:
    Square()
    {
        cout<<"Empty Square"<<endl;
    }
    Square(float lt)
    {
        length=lt;
        cout<<"Parameterized Square"<<endl;
    }
    float SquareArea()
    {
        return length*length;
    }
    ~Square()
    {
        cout<<"Square destroyed"<<endl;
    }
};
int main()
{
    Square();
    Square sq(7.7);
    sq.setData(5.7,6.7);
    sq.showDetails();
    cout<<"area "<<sq.SquareArea()<<endl;

    Triangle();
    Triangle tl(11.7,11.7);
    tl.showDetails();
    cout<<"Area "<<tl.TriangleArea()<<endl;

}
