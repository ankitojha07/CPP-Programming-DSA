#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createBST(node *root, int data)
{

    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = createBST(root->right, data);
    }
    else
    {
        root->left = createBST(root->left, data);
    }

    return root;
}

void takeInput(node *&root)
{
    cout << "Enter data to BST : ";
    int data;
    cin >> data;

    while (data != -1)
    {
        createBST(root, data);
        cin >> data;
    }
}

int main()
{
    node *root = NULL;
    takeInput(root);
    cout << endl;
    return 0;
}