#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
    public:
    double x,y;
    void set_data(double x, double y=0)
    {
        this->x = x;
        this->y = y;
    }
    virtual void display_area()
    {
        cout<<"shape"<<endl;
    }
};
class Rectangle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of rectangle : "<<x*y<<endl;
    }
};

class Triangle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of Triangle : "<<x*y/2<<endl;
    }

};
class Circle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of circle is : "<<M_PI*x*x<<endl;
    }
};

int main()
{
    Shape *s1,*s2,*s3;

    Rectangle r;
    Triangle t;
    Circle c;
    s1 = &r;
    s2 = &t;
    s3 = &c;
    
    s1->set_data(2,4);
    s1->display_area();

    s2->set_data(5,6);
    s2->display_area();

    s3->set_data(5);
    s3->display_area();
    return 0;
}