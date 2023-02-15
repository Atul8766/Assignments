#include <iostream>
#include <cstdlib>
using namespace std;

class node
{
    public:
    char value;
    node *next;

    node()
    {
        value = '\0';
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

    void insert(char v)
    {
        node *temp = new node();
        temp->value = v;

        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while(t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
        }
    }
    bool palindrome()
    {
        node *temp = head;
        node *t = head;
        int count = 0,size = 0,flag = 1;
        while(t!=NULL)
        {
            t=t->next;
            size++;
        }
        char arr[size] = {0};
        while(temp!=NULL)
        {
            arr[count] = temp->value;
            temp=temp->next;
            count++;
        }

        int j = count - 1;
        for(int i=0; i<=(count/2-1); i++)
        {
            if(arr[i]!=arr[j])
            {
                flag = 0;
                return false;
            }
            j--;
        }
        if(flag)
            return true;
        
        return 0;
    }
    void print()
    {
        node *t = head;
        while(t!=NULL)
        {
            cout<<t->value<<" -> ";
            t = t->next; 
        }
    }
};

int main()
{
    LinkedList l1;
    l1.insert('r');
    l1.insert('a');
    l1.insert('c');
    l1.insert('e');
    l1.insert('c');
    l1.insert('a');
    l1.insert('r');
    if(l1.palindrome())
    {
        cout<<"True\n";
    }
    else
    {
        cout<<"False\n";
    }
    // l1.print();
    return 0;
}