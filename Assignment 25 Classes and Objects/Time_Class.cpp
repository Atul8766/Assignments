#include <iostream>
using namespace std;

class Time
{
    private:
    int hour;
    int minute;
    int sec;
    public:
    void set_time(int h,int m,int s)
    {
        hour = h;
        minute = m;
        sec = s;
    }
    void show_data()
    {
        cout<<hour<<" hr "<<minute<<" min "<<sec<<" sec"<<endl;
    }
};

int main()
{
    Time t;
    t.set_time(3,45,20);
    t.show_data();
    return 0;
}