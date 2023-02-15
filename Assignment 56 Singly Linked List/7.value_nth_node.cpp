#include <iostream>
#include <cstdlib>
using namespace std;

class node
{
public:
    int value;
    node *next;

    node()
    {
        value = 0;
        next = NULL;
    }
};

class LinkedList
{
    node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insert(int v)
    {
        node *temp = new node();
        temp->value = v;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
        }
    }

    void Return(int n)
    {
        node *temp = head;
        node *t = head;
        int count = 0,size = 0,flag = 1;
        while(t!=NULL)
        {
            t=t->next;
            size++;
        }
        int arr[size] = {0};
        while(temp!=NULL)
        {
            arr[count] = temp->value;
            temp=temp->next;
            count++;
        }

        int j = count - 1;
        for(int i=0; i<=(count/2-1); i++)
        {
            int store = arr[i];
            arr[i] = arr[j];
            arr[j] = store;
            j--;
        }

        for(int i=0; i<=size-1; i++)
        {
            if(arr[i] == n)
            {
                flag = 0;
                cout<<i+1<<endl;
                return;
            }
        }
        if(flag)
        {
            cout<<"Value not found"<<endl;
        }
        
    }


    void print()
    {
        int count = 0;
        node *t = head;
        while(t!=NULL)
        {
            count++;
            // cout<<t->value<<" -> ";
            t = t->next;
        }
    }
};


int main()
{
    LinkedList l1;
    l1.insert(35);
    l1.insert(31);
    l1.insert(15);
    l1.insert(4);
    l1.insert(20);
    l1.insert(10);
    l1.Return(15);
    return 0;
}