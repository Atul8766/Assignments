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
    void showData()
    {
        int i,j;
        cout<<"\nMatrix is :\n";
        for(i=0; i<=2; i++)
        {

            for(j=0; j<=2; j++)
            {
                cout<<a[i][j]<<"       ";
            }
            cout<<"\n";
        }
    }
    friend Matrix operator<<(ostream &os ,Matrix m);
};

Matrix operator<<(ostream &os, Matrix m)
{
        int i,j;
        cout<<"\nMatrix is :\n";
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            {
                cout<<-m.a[i][j]<<"       ";
            }
            cout<<"\n";
        }
}
int main()
{
    Matrix m1;
    int arr[3][3];
    m1.setData(arr);
    cout<<m1;
    return 0;
}