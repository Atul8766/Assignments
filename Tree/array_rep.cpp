#include <iostream>
#include <cstdlib>
using namespace std;

class Tree
{
public:
    int arr[20] = {0};
    int size = 20;

   
    void insert(int v, int n)
    {
        if (n == 1)
        {
            arr[n] = v;
        }
        else if ((arr[n / 2] != 0) && (n < size))
        {
            arr[n] = v;
        }
        else
        {
            cout << "Parent's Does Not Exists" << endl;
        }
    }

    void insertLeftChild(int v, int p)
    {
        if (arr[p] != 0 && 2 * p < size)
        {
            arr[2 * p] = v;
        }
        else
        {
            cout << "Parent's Does Not Exists" << endl;
        }
    }

    void insertRightChild(int v, int p)
    {
        if (arr[p] != 0 && 2 * p + 1 < size)
        {
            arr[2 * p + 1] = v;
        }
        else
        {
            cout << "Parent's Does Not Exists" << endl;
        }
    }

    void print()
    {
        for (int i = 1; i < size; i++)
        {
            if (arr[i] != 0)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << " - ";
            }
        }
    }
};

int main()
{   
    Tree t;
    t.insert(5, 1);
    t.insert(10, 2);
    t.insert(20, 5);
    t.insert(30, 21);

    t.print();
    cout<<endl;
    return 0;
}