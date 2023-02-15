#include <iostream>
using namespace std;

class Rectangle
{
    private:
    double x,y,area;
    public:
    Rectangle () {}
    Rectangle (int l,int b)
    {
        x = l;
        y = b;
    }
    void show_Data()
    {
        cout<<area;
    }
    void area()
    {
        area = x*y; 
    }
    Rectangle(float l, float b)
    {
        x = l;
        y = b;
    }
    Rectangle(double l, double b)
    {
        x = l;
        y = b;
    }
};

int main()
{
    Rectangle in,fl,doub;
    
    return 0;
}