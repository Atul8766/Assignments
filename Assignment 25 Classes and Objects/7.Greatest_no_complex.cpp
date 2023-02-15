#include <iostream>
using namespace std;

class GreatestNumber
{
public:
    int greatest(int num1, int num2, int num3)
    {
        if (num1 > num2)
        {
        if (num1 > num3)
        return num1;
        else
        return num3;
        }
        else if (num2 > num3)
        {
            return num2;
        }
        else
        return num3;
    }
};

int main()
{
    GreatestNumber l1;
    int ans = l1.greatest(10,60,5);
    cout<<"Greatest No is: "<<ans<<endl;
    return 0;
}