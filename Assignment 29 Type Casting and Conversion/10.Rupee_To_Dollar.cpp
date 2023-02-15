#include <iostream>
using namespace std;

class Dollar
{
    private:
    float d;
    public:
    Dollar(){}
    Dollar(float x)
    {
        d = x;
    }
    void display()
    {
        cout<<"Dollar = "<<d<<endl;
    }
    float getD()
    {
        return d;
    }
};

class Rupee
{
    private:
    float r;
    public:
    Rupee(){}
    Rupee(float r)
    {
        this->r=r;
    }
    Rupee(Dollar d)
    {
        r = d.getD()*100;
    }
    operator Dollar()
    {
        return r/100;
    }
    void display()
    {
        cout<<"Rupee = "<<r<<endl;
    }
};

int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
