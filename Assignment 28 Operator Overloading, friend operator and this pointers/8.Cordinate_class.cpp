#include <iostream>
using namespace std;

class Cordinate
{
private:
    int x, y, z;

public:
    void setData(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void operator,(Cordinate X)
    {
        x = X.x;
        y = X.y;
        z = X.z;
    }
    Cordinate operator=(Cordinate X)
    {
        Cordinate temp;
        return temp;
    };
    void showData()
    {
        cout << "Cordinate x = " << x << "\nCordiante y = " << y << "\nCordinate z = " << z;
    }
};
int main()
{
    Cordinate eq1, eq2, eq3;
    eq1.setData(1, 2, 3);
    //eq3 = (eq1, eq2);
    return 0;
}