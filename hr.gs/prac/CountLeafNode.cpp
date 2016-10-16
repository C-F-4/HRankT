/*
You are given with a binary search tree.Complete the given function provided in your editor so that it returns the number of leaf nodes in a binary tree. This function has a parameter, , which is a pointer to the root node of a binary tree.
Explanation
Sample Input

7 //total no of nodes
20 10 30 8 12 25 40 // value entered  in the tree 
Sample Output
4 //leaf nodes
*/
#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    node* left;
    int data;
    node* right;
};

class bst {
public:
    node* createnode(int);
    node* insertion(node*, int);
    int LeafCount(struct node* node);
};

node* bst::insertion(node* root, int item)
{
    if (root == NULL) {
        return createnode(item);
    }
    else {
        if (root->data > item) {
            root->left = insertion(root->left, item);
        }
        else if (root->data < item)
            root->right = insertion(root->right, item);
    }
    return root;
}

node* bst::createnode(int item)
{
    node* newnode = new node;
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int bst::LeafCount(node* ptr)
{
    if (ptr == nullptr) {
        return 0;
    }
    else if (ptr->left == nullptr && ptr->right == nullptr) {
        return 1;
    }
    else {
        return (LeafCount(ptr->left) + LeafCount(ptr->right));
    }
}

int main()
{
    bst obj;
    struct node* root = NULL;
    int n, value, count;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = obj.insertion(root, value);
    }
    count = obj.LeafCount(root);
    cout << count;
}
