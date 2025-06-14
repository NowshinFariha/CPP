#include<iostream>
using namespace std;
class triangle
{
    private:
        float base;
        float height;
    public:
        void setHeight(float h)
        {
            height = h;
        }
        void setBase(float b)
        {
            base = b;
        }
        float getHeight()
        {
            return height;
        }
        float getBase()
        {
            return base;
        }
        float getArea()
        {
            return 0.5*base*height;
        }

};
int main()
{
    triangle t;
    t.setBase(5.6);
    t.setHeight(9.5);
    cout<<"The height is:"<<t.getHeight()<<endl;
    cout<<"The base is:"<<t.getBase()<<endl;
    cout<<"The area is:"<<t.getArea()<<endl;
}
