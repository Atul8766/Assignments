#include <iostream>
using namespace std;

class Cube
{
    private:
    int area;
    int vol;
    public:
    Cube()
    {
        vol = 0;
        area = 0;
    }
    void setCube(int x){ area = x ; }
    int getCube(){ return area; }
    int getvol(){ return vol; }
    void calculate() {vol = area*area*area;}
};

int main()
{
    Cube v1;
    v1.setCube(5);
    v1.calculate();
    cout<<"Volume of Cube "<<v1.getCube()<<" is "<<v1.getvol()<<endl;
    return 0;
}