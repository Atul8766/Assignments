#include <iostream>
using namespace std;

class DynamicArray
{
    int *array;
    int size;
    int capacity;

public:
    DynamicArray()
    {
        array = new int[1];
        size = 0;
        capacity = 1;
    }
    ~DynamicArray()
    {
        delete[] array;
        size = 0;
        capacity = 0;
    }
    void insert(int index, int value)
    {
        if (size == capacity)
        {
            // to resize the array to make flexible array like vector
            resize();
        }
        if (index >= capacity || index < 0)
        {
            cout << "Memory Not Exists" << endl;
        }

        array[index] = value;
        size++;
    }
    void insertion(int index, int value)
    {
        if (size == capacity)
        {
            // to resize the array to make flexible array like vector
            resize();
        }
        if (index >= capacity || index < 0)
        {
            cout << "Memory Not Exists" << endl;
        }
        for (int i = size; i>=index; i--)
        {
            array[i] = array[i - 1];
        }
        array[index] = value;
        size++;
    }
    void pop(int index)
    {
        if (index >= capacity || index < 0)
        {
            cout << "Memory Not Exists" << endl;
        }
        for(int i=index; i<size; i++)
        {
            array[i] = array[i+1];
        }
        size--;
    }

    int search(int value)
    {
        for(int i=0; i<size; i++)
        {
            if(array[i]==value)
            {
                return i;
            }
        }
        return -1;
    }

    void resize()
    {
        int *temp = new int[2 * capacity];
        for (int i = 0; i < size; i++)
        {
            temp[i] = array[i];
        }
        delete[] array;
        array = temp;
        capacity = 2 * capacity;
    }


    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << "\nSize : " << size << " Capacity : " << capacity << endl;
    }
};

int main()
{
    DynamicArray array;
    array.insert(0, 1);
    array.insert(1, 5);
    array.insert(2, 8);
    array.insert(3, 6);
    array.insert(4, 6);
    array.insert(5, 8);
    array.insertion(2, 1);
    array.pop(2);
    int ans = array.search(8);
    cout<<"Found at index : "<<ans<<endl;
    
    array.print();
    return 0;
}