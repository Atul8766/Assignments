#include <iostream>
using namespace std;

class Circle
{
    private:
    int r;
    int area;
    static float pie;
    public:
    void set_area(int x)
    {
        r = x;
    }
    int getR()
    {
        return r;
    }
    float get_area()
    {
        return area;
    }
    void calculatearea()
    {
        area = pie*r*r;
    }
};
float Circle::pie=3.14;
int main()
{
    Circle area;
    area.set_area(5);
    area.calculatearea();
    cout<<"Area of Circle is "<<area.getR()<<" is "<<area.get_area()<<endl;
    
    return 0;
}