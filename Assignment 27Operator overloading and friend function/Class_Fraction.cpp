#include <iostream>
using namespace std;

class fraction
{
    private:
    long numerator;
    long denominator;
    public:
    // fraction(long n = 0,long d = 0)
    // {
    //  cout<<"f1    :  "<<"0/0"<<endl;
    //  cout<<"f2    :  "<<"0/0"<<endl;
    // }
    fraction operator++(int)
    {
        fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }
    fraction operator++()
    {
        fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }
    friend fraction operator<<(ostream &os, fraction X);
    friend fraction operator>>(istream &os,fraction X);
};
fraction operator>>(istream &os, fraction X)
{
    fraction temp;
    
    cout<<"\n";
    cout<<"Numerator   :  ";
    cin>>X.numerator;
    temp.numerator = X.numerator;
    cout<<"\nDenominator :  ";
    cin>>X.denominator;
    temp.denominator = X.denominator;
    return temp;
}
fraction operator<<(ostream &os, fraction X)
{
    fraction temp;
    cout<<"\nf1++   :  "<<++temp.numerator<<"/"<<++temp.denominator;
    cout<<"\n++f1   :  "<<++temp.numerator<<"/"<<++temp.denominator<<endl;

    return temp;
}
int main()
{
    fraction f1,f2;
    cout<<"\n\nEnter 1st Fraction Value"<<endl;
    cin>>f1;
    cout<<f1;
    cout<<"\nEnter 2nd Fraction Value"<<endl;
    cin>>f2;
    cout<<f2;
    return 0;
}
