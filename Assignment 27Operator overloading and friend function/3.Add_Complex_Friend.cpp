#include <iostream>
using namespace std;

class Complex
{
    private:
    int real,img;
    public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }
    void showData()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
    friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.real = X.real+Y.real;
    temp.img = X.img+Y.img;
    return temp;
}

int main()
{
    Complex c1,c2,c3;
    c1.setData(2,5);
    c2.setData(5,6);
    c3 = c1+c2;
    //c3 = operator+(c1,c2);
    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
}