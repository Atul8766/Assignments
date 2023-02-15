#include <iostream>
using namespace std;

class Time 
{
    public:
    int hour,min;
    public:
    Time(){}
    Time(int x, int y)
    {
        hour = x;
        min = y;
    }
    Time(int x)
    {
        min = x;
    }
    void display()
    {
        cout<<hour<<" Hours "<<min<<" Minute"<<endl;
    }

};

class Minute
{
    private:
    int min;
    public:
    Minute()
    {
        min = 0;
    }
    Minute(Time t1)
    {
        min = t1.min;
    }
    void display()
    {
        cout<<"Minute: "<<min<<endl;
    }
};


int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1; // Fetch minute from time
t1.display();
m1.display();
return 0;
}