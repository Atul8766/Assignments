#include <iostream>
using namespace std;

class Swap
{
    private:
    int a,b;
    public:
    Swap(int x)
    {
        a = x;
    }
    void swap()
    {
        b = a;
    }
    void display()
    {
        cout<<b;
    }
};
int main()
{
    Swap s1 = 4,s2 = 5;
    s1.display();
    s2.display();
    return 0;
}