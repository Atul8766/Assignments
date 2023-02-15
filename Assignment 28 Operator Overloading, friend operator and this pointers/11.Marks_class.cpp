#include <iostream>
using namespace std;

class Marks
{
    private:
    int marks;
    public:
    void setData(int m)
    {
        marks = m;
    }
    void showData()
    {
        cout<<marks<<endl;
    }
    void operator->()
    {
        showData();
    }
};

int main()
{
    Marks m1;
    m1.setData(5);
    m1.operator->();
    return 0;
}