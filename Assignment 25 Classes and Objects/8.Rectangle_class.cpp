#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int l,b,area;
    public:
    void set_area(int x , int y)
    {
        l=x;
        b=y;
    }
    int get_value()
    {
        return l,b;
    }
    int get_area()
    {
        return area;
    }
    void calculate()
    {
        area = l*b;
    }

};

int main()
{
    Rectangle area;
    area.set_area(5,6);
    area.calculate();
    cout<<"Area of circle is "<<area.get_value()<<" is "<<area.get_area()<<endl;
    return 0;
}