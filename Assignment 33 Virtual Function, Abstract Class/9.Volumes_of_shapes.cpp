#include <iostream>
#include <math.h>
using namespace std;

class Volume
{
    protected:
    double val;
    public:
    void get_data(int s)
    {
        val = s;
    }
    virtual void display_volume()=0;
};

class Cube : public Volume
{
    private:
    double calc_cube()
    {
        double v = pow(val,3);
        return v;
    }
    public:
    void display_volume()
    {
        cout<<"Volume of cube is : "<<calc_cube()<<endl;
    }

};

class Sphere : public Volume
{
    private:
    double calc_sphere()
    {
        double v = 4/3*M_PI*pow(val,3);
        return v;
    }
    public:
    void display_volume()
    {
        cout<<"Volume of Sphere is : "<<calc_sphere()<<endl;
    }

};

int main()
{
    Cube c1;
    Sphere v1;

    c1.get_data(5);
    c1.display_volume();

    v1.get_data(5);
    v1.display_volume();
    return 0;
}