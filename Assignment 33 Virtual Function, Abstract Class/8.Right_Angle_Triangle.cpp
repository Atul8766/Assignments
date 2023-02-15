#include <iostream>
using namespace std;

class Proof
{
    protected:
    int a,b,c;
    virtual void setvalue(int x, int y, int z)=0;
};

class Compute : public Proof
{
    public:
    void setvalue(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void check_Triangle()
    {
        if(a*a+b*b==c*c)
        {
            cout<<"Given Triangle is a right angle triangle"<<endl;
        }
        else
        {
            cout<<"Given Triangle is not a right angle triangle"<<endl;
        }
    }
};

int main()
{
    Compute r1;
    r1.setvalue(5,12,13);
    r1.check_Triangle();
    return 0;
}