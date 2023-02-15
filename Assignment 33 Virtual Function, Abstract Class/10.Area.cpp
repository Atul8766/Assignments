#include <iostream>
#include <math.h>
using namespace std;

class Shape
{
    protected:
    double val;
    double p;
    public:
    void get_data(int s, int v=0)
    {
        val = s;
        p=v;
    }
    virtual void display_area()=0;
};

class Square : public Shape
{
    private:
    double calc_Square()
    {
        double v = pow(val,2);
        return v;
    }
    public:
    void display_area()
    {
        cout<<"Area of Square is : "<<calc_Square()<<endl;
    }

};

class Parallelogram : public Shape
{
    private:
    double calc_Parallelogram()
    {
        double v = val*p;
        return v;
    }
    public:
    void display_area()
    {
        cout<<"Area of Parallelogram is : "<<calc_Parallelogram()<<endl;
    }

};

int main()
{
    Square s1;
    Parallelogram p1;

    s1.get_data(5);
    s1.display_area();

    p1.get_data(5,4);
    p1.display_area();
    return 0;
}