#include <iostream>
using namespace std;

class Dollar
{
    private:
    int d;
    public:
    Dollar(){}
    Dollar(int d)
    {
        this->d=d;
    }
    void display()
    {
        cout<<"Dollar is "<<d<<endl;
    }
};

int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;
}