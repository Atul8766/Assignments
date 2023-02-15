#include <iostream>
using namespace std;

class Cordinate
{
    private:
    int x,y,z;
    public:
    Cordinate()
    {
        x=y=z=0;
    }
    void setData(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showData()
    {
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
};
int main()
{
    Cordinate c1,c2,c3;
    c1.setData(1,2,3);
    c2.setData(2,4,6);
    c1.showData();
    //c2.showData();
    c3 = (c1,c2);
    c3.showData();
    return 0;
}
