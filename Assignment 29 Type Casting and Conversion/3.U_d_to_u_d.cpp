#include <iostream>
using namespace std;

class Product
{
    private:
    int v1,v2;
    public:
    void setData(int x, int y)
    {
        v1 = x;
        v2 = y;
    }
    int getP()
    {
        return v1*v2;
    }
};

class item
{
    private:
    int i1;
    public:
    item(){}
    item(Product p1)
    {
        i1=p1.getP();
    }
    void showData()
    {
        cout<<"item1 = "<<i1<<endl;
    }
};

int main()
{
    item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    i1.showData();
    return 0;
}