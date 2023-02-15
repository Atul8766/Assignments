#include <iostream>
using namespace std;
class Invent1;

class Invent1
{
    private:
    int x;
    public:
    Invent1(){}
    Invent1(float z)
    {
        cout<<"Construct accept float called"<<endl;
        x = z;
    }
    operator float()
    {
        cout<<"Type Cast operator called"<<endl;
        return x;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
    }
};
class Invent2
{
    private:
    int x,y;
    public:
    Invent2()
    {

    }
    Invent2(Invent1 d1)
    {
        x = d1;
    }
    void display()
    {
        cout<<"Invent 2  Called"<<endl;
        cout<<"x = "<<x<<endl;
    }
 
};


int main()
{
    Invent1 s1=(4,5);
    Invent2 d1;
    float tv;
    // tv = s1;
    d1 = s1;
    d1.display();

    return 0;
}