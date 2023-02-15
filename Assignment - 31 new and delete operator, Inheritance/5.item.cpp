#include <iostream>
using namespace std;

class Item
{
    public:
    float item_no,price;    
    char name[25];
    protected:
    void set_item()
    {
        cout<<"\nEnter Item Name: ";
        cin.ignore();
        fgets(name,25,stdin);
        cout<<"\nEnter Item No. : ";
        cin>>item_no;
        cout<<"\nEnter Item Price : ";
        cin>>price;
    }
};

class Discount : public Item
{
    private:
    float discount;
    float total;
    void set_Discount()
    {
        cout<<"\nEnter Discount Precent : ";
        cin>>discount;
    }
    public:
    float dis;
    void set_customer()
    {
        set_item();
        set_Discount();
    }
    void display()
    {
        cout<<"\nItem Name : "<<name;
        cout<<"Item No. : "<<item_no;
        cout<<"\nItem Price : "<<price;
        cout<<"\nDiscount Percent : "<<discount;
        dis= (price-(price*discount/100));
        cout<<"\nDiscounted Price : "<<dis<<endl;
    }

};

int main()
{
    Discount c1[100];
    int i,n,price = 0,discount= 0;
    cout<<"How many item you want to enter? : ";
    cin>>n;
    for(i=0; i<=n-1; i++)
    {
        c1[i].set_customer();
        cout<<"\n----------------------\n";
    }
    for(i=0; i<=n-1; i++){
        c1[i].display();
        cout<<"\n----------------------\n";
    }
    for(i=0; i<=n-1; i++)
    {
        price = price+c1[i].price;
    }
    for(i=0; i<=n-1; i++)
    {
        discount = discount+c1[i].price - c1[i].dis;
    }
    cout<<"Total Price    : "<<price<<endl;
    cout<<"Discount Price : "<<discount<<endl;
    cout<<"Payable Amount : "<<price-discount<<endl;

    return 0;
}