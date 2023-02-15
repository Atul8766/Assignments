#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int v)
    {
        data = v;
        right = NULL;
        left = NULL;
    }

    void Preorder()
    {
        if (this != NULL)
        {
            cout << data << " ";
            left->Preorder();
            right->Preorder();
        }
    }

    void Inorder()
    {
        if (this != NULL)
        {
            left->Inorder();
            cout << this->data << " ";
            right->Inorder();
        }
    }

    node *insert(int value)
    {
        if (this == NULL)
        {
            return new node(value);
        }
        if (this->data <= value)
        {
            this->right = this->right->insert(value);
        }
        else if (this->data > value)
        {
            this->left = this->left->insert(value);
        }
        return this;
    }

    node *search(int key)
    {
        if (this == NULL)
        {
            return NULL;
        }
        else if (this->data == key)
        {
            return this;
        }
        else if (this->data > key)
        {
            return left->search(key);
        }
        else
        {
            return right->search(key);
        }
    }

    node *min()
    {
        if (this == NULL)
        {
            return NULL;
        }
        else if (this->left == NULL)
        {
            return this;
        }
        else
        {
            return left->min();
        }
    }

    node *max()
    {
        if (this == NULL)
        {
            return NULL;
        }
        else if (this->right == NULL)
        {
            return this;
        }
        else
        {
            return right->max();
        }
    }

    node *inorderSuc()
    {
        return right->min();
    }

    node *inorderPre()
    {
        return left->max();
    }

    node *Delete(int value)
    {
        if (!this)
        {
            return NULL;
        }
        if (this->data < value)
        {
            this->right = this->right->Delete(value);
        }
        if (this->data > value)
        {
            this->left = this->left->Delete(value);
        }
        else
        {
            if(!this->right && !this->left)
            {
                return NULL;
            }

            else if(this->right == NULL)
            {
                node *temp = this->right;
                delete(this);
                return temp;
            }

            else if(this->left == NULL)
            {
                node *temp = this->left;
                delete(this);
                return temp;
            }

            else 
            {
                node *temp = this->inorderSuc();
                this->data = temp->data;
                this->right = this->right->Delete(temp->data);
            }
        }
        return this;
    }
   
};

int main()
{
    node *root = new node(20);
    // root->left = new node(15);
    // root->right = new node(40);
    // root->left->left = new node(10);
    // root->left->right = new node(18);
    // root->left->right->left = new node(16);
    // root->right->left = new node(30);
    // root->right->right = new node(60);
    // root->right->right = new node(60);
    // root->right->right->left = new node(50);
    // root->right->right->right = new node(70);
    // root->right->right->right->left = new node(65);

    root->insert(25);
    root->insert(15);
    root->insert(10);
    root->insert(18);
    root->insert(23);
    root->insert(30);
    root->insert(21);
    root->insert(28);
    root->insert(40);

    root->Delete(15);

    root->Inorder();
    cout << "\n";
    // node *temp = root->search(25);
    // if (temp)
    // {
    //     cout << temp->data << " is present inside tree\n";
    // }
    // else
    // {
    //     cout << "Key is not present inside tree\n";
    // }

    // node *temp = root->inorderPre();
    // cout<<"Minimum element is : "<<temp->data<<endl;
    // cout << "Inoreder Predecessor : " << temp->data << endl;
    return 0;
}
