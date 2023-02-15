#include <iostream>
using namespace std;

class Complex
{
    private:
    int real,img;
    public:
    Complex ()
    {

    }
    Complex(int x)
    {
        real = x;
        img = x;
    }
    void showData()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
};

int main()
{
    Complex c1;
    int x = 5;
    c1=5;
    c1.showData();
    return 0;
}