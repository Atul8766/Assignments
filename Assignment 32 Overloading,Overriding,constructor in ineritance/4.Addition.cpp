#include <iostream> 
using namespace std;

class Additon
{
    private:
    double x,y,z,total;
    public:
    void add(double x, double y)
    {
        total = x+y;
    }
    void add(double x, double y, double z)
    {
        total = x+y+z;
    }
    void show_Data()
    {
        cout<<total<<endl;
    }
};

int main()
{
    Additon a1,a2;
    a1.add(2,3);
    a2.add(2,3,8);
    a1.show_Data();
    a2.show_Data();
    return 0;
}