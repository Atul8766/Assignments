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
    Complex operator++()
    {
        Complex temp;
        temp.real = real++;
        temp.img = img++;
        return temp;
    } 
    Complex operator++(int)
    {
        Complex temp;
        temp.real = real++;
        temp.img = img++;
        return temp;   
    }
    Complex operator--()
    {
        Complex temp;
        temp.real = real--;
        temp.img = img--;
        return temp;
    }
    Complex operator--(int)
    {
        Complex temp;
        temp.real = real--;
        temp.img = img--;
        return temp;
    }  
};

int main()
{
    Complex c1;
    c1.setData(4,5);
    //++c1; //c1.operator();
    //c1++; //c1.operator++(1);
    //--c1;
    //c1--;
    c1.showData();
    return 0;
}