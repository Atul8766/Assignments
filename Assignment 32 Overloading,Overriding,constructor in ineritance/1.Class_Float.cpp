#include <iostream>
using namespace std;

class FLOAT 
{
    private:
    float val; 
    public:
    FLOAT(){}
    FLOAT (int x)
    {
        val = x;
    }
    FLOAT(float x)
    {
        val = x;
    }
    void show_Data()
    {
        cout<<val<<endl;
    }
    FLOAT operator +(FLOAT X)
    {
        FLOAT temp;
        temp.val = val+X.val;
        return temp; 
    }
    FLOAT operator -(FLOAT X)
    {
        FLOAT temp;
        temp.val = val-X.val;
        return temp; 
    } 
    FLOAT operator *(FLOAT X)
    {
        FLOAT temp;
        temp.val = val*X.val;
        return temp; 
    }
    FLOAT operator /(FLOAT X)
    {
        FLOAT temp;
        temp.val = val/X.val;
        return temp; 
    }   

};

int main()
{
    FLOAT z,x=5,y=6;
    z = x/y;
    z.show_Data();
    
    return 0;
}