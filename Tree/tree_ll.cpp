#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }

    void preorder()
    {
        if (this != NULL)
        {
            cout << data << " ";
            left->preorder();
            right->preorder();
        }
    }

    void postorder()
    {
        if (this != NULL)
        {
            left->postorder();
            right->postorder();
            cout << data << " ";
        }
    }

    void inorder()
    {
        if (this != NULL)
        {
            left->inorder();
            cout << data << " ";
            right->inorder();
        }
    }

    void levelorderNonRe()
    {
        if (this == NULL)
        {
            return;
        }

        queue<node *> q;
        q.push(this);

        while (q.empty() == false)
        {
            node *temp = q.front();
            cout << temp->data << " ";
            q.pop();

            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }

    int height(node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        else
        {
            int lheight = height(root->left);
            int rheight = height(root->right);

            if (lheight > rheight)
            {
                return lheight + 1;
            }
            else
            {
                return rheight + 1;
            }
        }
    }

    void printLLrecursive()
    {
        int h = this->height(this);

        for (int i = 1; i <= h; i++)
        {
            this->printcurrentlevel(this, i);
        }
    }

    void printcurrentlevel(node *root, int level)
    {
        if (root == NULL)
        {
            return;
        }
        if (level == 1)
            cout << root->data << " ";
        else if (level > 1)
        {
            this->printcurrentlevel(root->left, level - 1);
            this->printcurrentlevel(root->right, level - 1);
        }
    }
};

// class Tree
// {
// public:
//     void preorder(node *root)
//     {
//         if (root != NULL)
//         {
//         }
//     }
// };

int main()
{
    node *root = new node(2);
    root->left = new node(4);
    root->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->left = new node(8);
    root->right->right->left->left = new node(10);
    root->right->right->left->right = new node(11);
    root->right->right->right = new node(9);
    root->right->right->left->right->left = new node(12);
    cout << "levelorder = ";
    root->levelorderNonRe();
    cout << "\n";
    cout << "Height of current tree is : " << root->height(root) << endl;
    cout << "Recursive levelorder : ";
    root->printLLrecursive();
    cout << "\n";
    // cout<<"Postorder = ";
    // root->postorder();
    // cout<<"\n";
    // cout<<"Inorder = ";
    // root->inorder();
    // cout<<"\n";

    return 0;
}