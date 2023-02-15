#include <iostream>
using namespace std;

class Add
{
    public:
    int num1,num2;
    void setadd(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
};

class Sum:public Add
{
    public:
    int getadd()
    {
        return num1+num2;
    }
    void display()
    {
        cout<<"Sum is: "<<getadd()<<endl;
    }
};

int main()
{
    Sum s1;
    s1.setadd(212,98);
    s1.display();
    return 0;
}