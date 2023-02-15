#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    protected:
    char name[25];
    char address[40];
    long int phn_no;
    protected:
    void set_person()
    {
        cout<<"\nEnter Name : ";
        fgets(name,20,stdin);
        cout<<"\nEnter Address : ";
        fgets(address,40,stdin);
        cout<<"\nEnter Phone No. : ";
        cin>>phn_no;
        cin.ignore();
    }
};

class Employee:public Person
{
    private:
    int empid;
    protected:
    void set_employee()
    {
        cout<<"Enter Employee No. : ";
        cin>>empid;
        cin.ignore();
    }
};

class Manger:public Employee
{
    private:
    char desg[30];
    char dp_name[30];
    long int salary;
    long highest=0;
    char name1[25];
    public:
    void set_Manger()
    {
        set_employee();
        set_person();
        cout<<"\nEnter Designation : ";
        fgets(desg,30,stdin);
        cout<<"\nEnter Department Name : ";
        fgets(dp_name,30,stdin);
        cout<<"\nEnter Basic Salary : ";
        cin>>salary;
        cin.ignore();

        if(salary>highest)
        {
            highest = salary;
            strcpy(name1,name);
        }
    }
    void display()
    {
        cout<<"\n\nManger with Highest Salary is : "<<highest<<" And, Manger Name is : "<<name1<<endl;
    }
};

int main()
{
    int i,n;//choice;
    Manger m1;
    // cout<<"\n\nd1.Accept all details of 'n' Mangers\n";
    // cout<<"2.Display manger having highest salary\n";
    // cout<<"\nEnter Your Choice : \n";
    // cin>>choice;
    cout<<"\nHow many times you want to Enter? : ";
    cin>>n;
    cin.ignore();
    for(i=0; i<=n-1; i++){
    cout<<"\nEnter Details of Manger\n";
    cout<<"-----------------------------\n";
    m1.set_Manger(); 
    }
    m1.display();
    // switch(choice){
    // case 1: 
    // }
    // case 2: 
    // }
   
    return 0;
}