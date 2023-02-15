#include <iostream>
using namespace std;

class Animals
{
    public:
    void sound()
    {
        cout<<"Animals";
    }
};
class Dogs : public Animals
{
    public:
    void sound()
    {
        cout<<"Bark"<<endl;
    }
};

int main()
{
    Dogs d1;
    d1.sound();
    return 0;
}