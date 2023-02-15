#include <iostream>
using namespace std;
class Student
{
    private:
    int rollno;
    string name;
    public:
    friend void operatornew(Student,Student);
    friend void operatordelete(Student,Student);
    void showData()
    {
        cout<<"Roll No is: "<<rollno<<" Name is: "<<name<<endl;
    }
};
// void operatornew(Student X, Student Y)
// {
//     int *ptr=NULL;
//     *ptr = ;
// }
int main()
{
    return 0;
}