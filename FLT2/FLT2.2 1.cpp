#include<iostream>
using namespace std;
class rectangle
{
    private:
        float length;
        float width;
    public:
        void setData(float lt, float wd)
        {
            length = lt;
            width = wd;
        }
        float getlength()
        {
            return length;
        }
        float getwidth()
        {
            return width;
        }
        float getArea()
        {
            return length*width;
        }

};
int main()
{
    rectangle r;
    r.setData(21.92,15.59);
    cout<<"The length is:"<<r.getlength()<<endl;
    cout<<"The width is:"<<r.getwidth()<<endl;
    cout<<"The Area is :"<<r.getArea()<<endl;
}
