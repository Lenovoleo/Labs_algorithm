#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

int height(node *root)
{
    if (root == NULL)
        return -1;
    else
    {
        int l = height(root->left);
        int r = height(root->right);
        if (l > r)
            return l + 1;
        else
            return r + 1;
    }
}

node *newNode(int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node *insert(node *root, int data)
{
    if (root == NULL)
        return newNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

int main()
{
    int n, val;
    cin >> n;
    node *root = NULL;
    for (int i = 0; i < n; ++i)
    {
        cin >> val;
        root = insert(root, val);
    }

    int treeHeight = height(root);
    cout << treeHeight << endl;

    return 0;
}
