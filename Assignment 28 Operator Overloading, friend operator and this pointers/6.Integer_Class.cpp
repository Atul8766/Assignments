#include <iostream>
using namespace std;

class Integer
{
    private:
    int num;
    public:
    void operator=(int X)
    {
        num=X;
    }
    int operator!()
    {
        int num = !num;
        return num;
    }
    void showData()
    {
        cout<<num<<endl;
    }
};


int main()
{
    Integer a;
    a=!0;
    a.showData();
    return 0;
}