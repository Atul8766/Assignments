#include <iostream>
using namespace std;

class Date
{
    private:
    int date;
    int month;
    int year;
    public:
    Date()
    {
        cout<<"Enter Date: ";
        cin>>date;
        cout<<"Enter month: ";
        cin>>month;
        cout<<"Enter year: ";
        cin>>year;
    }
    void DisplayDate()
    {
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

int main()
{
    Date day1,day2;
    day1.DisplayDate();
    day2.DisplayDate();
    return 0;
}