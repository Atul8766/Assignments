#include <iostream>
using namespace std;

class Matrix
{
    private:
    int a[3][3];
    public:
    void setData(int arr[][3])
    {
        cout<<"\nEnter Matrix Element (3 X 3):\n\n";
        int i,j;
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            {
                cin>>arr[i][j];
                a[i][j] = arr[i][j];
            }
        }
    }
    Matrix operator+(Matrix m)
    {
        int i,j;
        Matrix temp;
        cout<<"Addition of Matrix is :"<<endl;
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            {
                temp.a[i][j] = a[i][j]; 
                cout<<temp.a[i][j]+m.a[i][j]<<"        ";
            }    
            cout<<"\n";
        }
        return temp;
    }
    friend ostream & operator<<(ostream &os ,Matrix m);
};
ostream & operator<<(ostream &os, Matrix m)
{
        int i,j;
        cout<<"\nMatrix is :\n";
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            {
                cout<<m.a[i][j]<<"       ";
            }
            cout<<"\n";
        }
        return cout;
}
int main()
{
    Matrix m1,m2,m3;
    int arr[3][3];
    m1.setData(arr);
    m2.setData(arr);
    // cout<<m1<<m2;
    m3 = m1+m2;
    
    return 0;
}