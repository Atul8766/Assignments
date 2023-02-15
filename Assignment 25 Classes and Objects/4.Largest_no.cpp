#include <iostream>
using namespace std;

class LargestNumber
{
    public:
    int largest(int num)
    {
        int ans = 0;
        while(num!=0)
        {
            int k = num%10;
            if(k>ans)
            ans = k;
            num = num/10;
        }
        return ans;
    }
};

int main()
{
    LargestNumber l1;
    int ans = l1.largest(326);
    cout<<"Largest no is: "<<ans<<endl;
    return 0;
}