#include <iostream>
using namespace std;

class Student
{
    private:
    int rollno;
    char name[50];
    public:
    Student()
    {
        cout<<"Enter student roll no: ";
        cin>>rollno;
        cin.ignore();
        cout<<"Enter student name: ";
        cin.getline(name,50);
    }
    void display()
    {
        cout<<"Name : "<<name<<"\n"<<"Roll No : "<<rollno<<endl;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}