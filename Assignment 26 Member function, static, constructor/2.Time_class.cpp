#include <iostream>
using namespace std;

class Time
{
    private:
    int h;
    int m;
    int s;
    public:
    void setTime(int x,int y,int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void showTime()
    {
        cout<<h<<" Hour "<<m<<" minute "<<s<<" sec "<<endl;
    }
    void normalize()
    {

    }

    Time add(Time X)
    {
        Time total;
        total.h = h+X.h;
        total.m = m+X.m;
        total.s = s+X.s;
        return total;
    }
};


int main()
{
    Time t1,t2,t3;
    t1.setTime(3,45,20);
    t1.showTime();
    t2.setTime(2,10,25);
    t2.showTime();
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}