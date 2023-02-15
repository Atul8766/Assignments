#include <iostream>
using namespace std;

class Box
{
    private:
    int length;
    int width;
    int height;
    float vol;
    public:
    // Box(int x,int y,int z)
    // {
    //     length = x;
    //     width = y;
    //     height = z;
    // }
    // int getBox()
    // {
    //     return vol;
    // }

    Box()
    {
        cout<<"Enter Length of the box: ";
        cin>>length;
        cout<<"Enter Width of the box: ";
        cin>>width;
        cout<<"Enter Height of the box: ";
        cin>>height;
    }
    float getBox()
    {
        return vol;
    }
    void calculateBox()
    {
        vol = length*width*height;
    }
};

int main()
{
    Box b1;
    b1.calculateBox();
    cout<<"Volume of the box is "<<b1.getBox()<<endl;
    return 0;
}