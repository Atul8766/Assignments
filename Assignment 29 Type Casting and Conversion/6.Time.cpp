#include <iostream>
using namespace std;

class Time
{
    private:
    int x;
    int y;
    public:
    Time()
    {}
    Time(int a)
    {
        x = a/3600;
        y = a%3600;
    }

    void display()
    {
        cout<<x<<" Hour "<<y<<" Minute"<<endl;
    }
};

int main()
{
    int duration;
    cout<<"Enter time duration in minutes"<<endl;
    cin>>duration;
    Time t1 = duration;
    t1.display();
return 0;
}