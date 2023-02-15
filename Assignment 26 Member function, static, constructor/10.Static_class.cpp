#include <iostream>
using namespace std;

class StaticCount
{
    private:
    static int count;
    public:
    void set_static(int x)
    {
        count = x;
    }
    int get_static()
    {
        return count;
    }
    int get_inc()
    {
        return count;
    }
    void increment()
    {
        count++;
    }
};
int StaticCount::count = 0;
int main()
{
    StaticCount c;
    c.set_static(5);
    c.increment();
    c.increment();
    c.increment();
    cout<<"Value is: "<<c.get_static()<<" is "<<c.get_inc()<<endl;
    return 0;
}