#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;
    public:
    void set_complex(int a, int b)
    {
        real = a;
        img = b;
    }
    void show_data()
    {
        cout<<"Complex No is: "<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1;
    c1.set_complex(3,5);
    c1.show_data();
    return 0;
}