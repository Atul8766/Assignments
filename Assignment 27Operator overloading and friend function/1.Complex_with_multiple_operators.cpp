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
    Complex operator+(Complex X)
    {
        Complex temp;
        temp.real = real+X.real;
        temp.img = img+X.img;
        return temp;
    }
    Complex operator-(Complex X)
    {
        Complex temp;
        temp.real = real-X.real;
        temp.img = img-X.img;
        return temp;
    }
    Complex operator*(Complex X)
    {
        Complex temp;
        temp.real = real*X.real;
        temp.img = img*X.img;
        return temp;
    }
    bool operator==(Complex X)
    {
        if(real==X.real && img==X.img)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(3,2);
    c2.setData(3,2);
    //c3 = c1+c2; //c3 = c1.operator+(c2);
    //c3 = c1-c2; //c3 = c1.operator-(c2);
    //c3 = c1*c2; //c3 = c1.operator*(c2);
    c1.showData();
    c2.showData();
    //c3.showData();

    if(c1==c2)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"diff"<<endl;
    }

    return 0;
}