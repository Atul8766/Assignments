#include <iostream>
using namespace std;

class Complex
{
    private:
    int real,img;
    public:
    void setData(int x, int y)
    {
        real = x;
        img= y;
    }
    operator int()
    {
        return (real+img);
    }
};

int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x = c1;
    cout<<x<<endl;
    return 0;
}