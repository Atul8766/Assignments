#include <iostream>
using namespace std;

class Complex
{
    private:
    int *real;
    int *img;
    public:
    void setData(int &real,int &img)
    {
      real = real;
      img = img;

    }
    void showData()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
};

int main()
{
    Complex c1;
    int a = 5, b = 6;
    c1.setData(a,b);
    c1.showData();
    return 0;
}