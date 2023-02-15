#include <iostream>
using namespace std;

class CString
{
    private:
    string s;
    public:
    void operator=(string x)
    {
        s = x;
    }
    void showData()
    {
        cout<<s;
    }
    CString operator+(CString X)
    {
        CString temp;
        temp.s = s+X.s;
        return temp;
    }
    bool operator==(CString X)
    {
        if(s==X.s)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main()
{
    CString s1,s2,s3;
    s1 = "Atul";
    s2 = "Shukla";
    s3 = s1+s2;
    s3.showData();

    if(s1 == s2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}