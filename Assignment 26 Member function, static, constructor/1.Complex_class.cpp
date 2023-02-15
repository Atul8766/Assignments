#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;
    public:
    void set_data(int x, int y)
    {
        real = x;
        img = y;
    }  
    void showData()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
    Complex add(Complex X)
    {
        Complex temp;
        temp.real = real+X.real;
        temp.img = img+X.img;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.set_data(4,5);
    c2.set_data(5,6);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}