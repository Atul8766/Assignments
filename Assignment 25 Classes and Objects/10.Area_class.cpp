#include <iostream>
using namespace std;

class Area
{
    private:
    static float pie;
    public:
    int square(int s)
    {
        return s*s;
    }
    int circle(int r)
    {
        return pie*r*r;
    }
    int rectanlge(int l,int b)
    {
        return l*b;
    }
};
float Area::pie=3.14;
int main()
{
    Area s1,c1,r1;
    cout<<"Area of square is: "<<s1.square(5)<<endl;
    cout<<"Area of circle is: "<<c1.circle(5)<<endl;
    cout<<"Area of rectangle is: "<<r1.rectanlge(5,9)<<endl;

    return 0;
}