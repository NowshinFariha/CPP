#include<iostream>
using namespace std;
class Shape
{
protected:
    float length; float height;
public:
    Shape()
    {
        cout<<"Empty Shape"<<endl;
    }
    Shape(float lt)
    {
        length=lt;
        cout<<"Parameterized Shape"<<endl;
    }
    float setData (float lt, float ht)
    {
        length=lt;
        height=ht;
    }
    void showDetails()
    {
        cout<<"Length: "<<length<<endl;
    }
    ~Shape()
    {
        cout<<"Shape destructed"<<endl;
    }
};
class Rectangle
{
protected:
    float width; float height;
public:
    Rectangle()
    {
        cout<<"Rectangle Empty constructor"<<endl;
    }
    Rectangle(float wd, float ht)
    {
        width=wd;
        height=ht;
        cout<<"Rectangle Parametrized constructor"<<endl;
    }
    float RectangleArea()
    {
        return width*height;
    }
    ~Rectangle()
    {
        cout<<"Rectangle destructed"<<endl;
    }
};
class Square : public Rectangle, public Shape
{
public:
    Square()
    {
        cout<<"Square Empty constructor"<<endl;
    }
    Square(float lt): Shape(lt)
    {
        cout<<"Square Parameterized constructor"<<endl;
    }
    float SquareArea()
    {
        return length*length;
    }
    ~Square()
    {
        cout<<"Square Destructed"<<endl;
    }
};

int main()
{
    Square();
    Square sq(15.1);
    sq.showDetails();
    cout<<sq.SquareArea()<<endl;
}
