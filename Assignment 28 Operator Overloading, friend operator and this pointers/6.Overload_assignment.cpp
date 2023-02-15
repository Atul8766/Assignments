#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;
    public:
    void setData(int r, int i)
    {
        real = r;
        img = i;
    }
    void showData()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
    void operator=(Complex X)
    {
        cout<<"Assignment Operator Called"<<endl;
        real = X.real;
        img = X.img;
    }
};

int main()
{
    Complex c1,c2;
    c1.setData(4,5);
    c1.showData();
    c2 = c1;
    c2.showData();
}