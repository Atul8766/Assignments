#include <iostream>
using namespace std;

class Bill
{
    private:
    int unit;
    float bill;
    public:
    void set_unit(int x)
    {
        unit = x;
    }
    int get_unit()
    {
        return unit;
    }
    float get_bill()
    {
        return bill;
    }
    void calculate_bill()
    {
        int i, num = unit,check;
        if(num>1000){
            check = 3;
        }
        else
        check = num/100;
        for (i=0; i<=check; i++){
        if(i==0){
            bill = 100*1.20;
            unit = unit-100;
        }
        if(i==1){
            if(unit>=100){
            bill = bill+(100*2);
            unit = unit - 100;
            }
            else
            bill = bill+(unit*2);
        }
        if(i==2){
            bill = bill+(unit*3);
        }
    }
    }

};

int main()
{
    Bill user1;
    user1.set_unit(1001);
    user1.calculate_bill();
    cout<<"Total Unit: "<<user1.get_unit()<<" Total amount to be paid "<<user1.get_bill()<<"₹"<<endl;  
    return 0;
}