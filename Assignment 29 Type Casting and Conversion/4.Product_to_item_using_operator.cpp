#include <iostream>
using namespace std;

class item
{
    private:
    int item1;
    public:
    item(){}
    item(int x)
    {
        item1 = x;
    }
    void display()
    {
        cout<<"Item 1 = "<<item1<<endl;
    }
};

class Product
{
    private:
    int v1,v2;
    public:
    Product(){}
    void setData(int x, int y)
    {
        v1 = x;
        v2 = y;
    }
    operator item()
    {
        cout<<"Operator Called"<<endl;
        return (v1*v2);
    }
  
};



int main()
{
    item i1;
    Product p1;
    p1.setData(3,4);
    i1 = p1;
    i1.display();
    return 0;
}