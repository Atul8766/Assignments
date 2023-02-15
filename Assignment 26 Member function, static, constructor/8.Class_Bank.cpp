#include <iostream>
using namespace std;

class Bank
{
    private:
    int principal;
    static float roi;
    int year;
    float soi;
    public:
    Bank()
    {
        principal = 0;
        year = 0;
    }
    void setData(int x,int z)
    {
        principal  = x;
        year  = z;
    }
    int getData()
    {
        return principal,roi,year;
    }
    float getSoi()
    {
        return soi;
    }
    void calculate()
    {
        soi = (principal*roi*year);
    }
};
float Bank::roi = 0.15;
int main()
{
    Bank acc1;
    acc1.setData(10000,5);
    acc1.calculate();
    cout<<"The simple interset is: "<<acc1.getSoi()<<endl;
    return 0;
}