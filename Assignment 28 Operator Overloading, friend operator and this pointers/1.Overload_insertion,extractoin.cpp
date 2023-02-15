#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;
    public:
    Complex(int r = 0, int i = 0){real = r; img = i;}
    friend ostream & operator<<(ostream &os, Complex &X);
    friend istream & operator>>(istream &os, Complex &X);
};

ostream & operator<<(ostream &os, Complex &X)
{
    os<<X.real<<" + "<<X.img<<"j"<<endl;
    return os;
}
istream & operator>>(istream &os, Complex &X)
{
    cout<<"Enter real and imaginary part"<<endl;
    os>>X.real;
    os>>X.img;
    return os;
}


int main()
{
    Complex c1;
    cin>>c1;
    cout<<"Complex No is: ";
    cout<<c1;
    return 0;
}