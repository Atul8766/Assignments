#include <iostream>
using namespace std;

class Square
{
    public:
    int square(int num)
    {
        return num*num;
    }
};

int main()
{
    Square s1;
    int ans = s1.square(4);
    cout<<"Square is: "<<ans<<endl;

    return 0;
}