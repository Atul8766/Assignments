#include <iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    public:
    void set_name(string x)
    {
        name = x;
    }
    void set_age(int x)
    {
        age = x;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};

class Employee:public Person
{
    private:
    int empid;
    int salary;
    public:
    void setEmpid(int x)
    {
        empid = x;
    }
    void setSalary(int y)
    {
        salary = y;
    }
    int getEmpid()
    {
        return empid;
    }
    int getSalary()
    {
        return salary;
    }

    void display()
    {
        cout<<"Name: "<<getname()<<"\nage: "<<getage()<<"\nEmpid: "<<getEmpid()<<"\nSalary: "<<getSalary()<<endl;
    }

};

int main()
{   
    Employee emp1;
    emp1.set_name("Atul Shukla");
    emp1.set_age(21);
    emp1.setEmpid(41096);
    emp1.setSalary(50000);
    emp1.display();
    return 0;
}