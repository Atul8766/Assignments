#include <iostream>
using namespace std;

class Subjects
{
    protected:
    float m1,m2,m3;
    public:
    void setMarks(float x,  float y, float z)
    {
        m1 = x;
        m2 = y;
        m3 = z;
    }
};

class Total:public Subjects
{
    private:
    float total;
    protected:
    float gettotal()
    {
        total = m1+m2+m3;
        return total;
    }
};

class Precent:public Total
{
    private:
    float percent;
    float getprecent()
    {
        percent = (gettotal()/300)*100;
        return percent;
    }
    public:
    void display()
    {
        cout<<"Precentage of student : "<<getprecent()<<"%"<<endl;
    }
};

int main()
{
    Precent p1;
    p1.setMarks(58,65,54);
    p1.display();
    return 0; 
}