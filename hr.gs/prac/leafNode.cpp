/*
Write a code to count number of leaf nodes.
Input:
3
10
12 
50
Output:
2
Explanation: First line of input is the total no of nodes n. next n lines are the value of tree nodes.
Output is the count of tree nodes.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    node* left;
    int data;
    node* right;
};

struct bst {
    node* insertion(node* root, int val)
    {
        if (root == NULL) {
            struct node* newNode = new struct node;
            newNode->data = val;
            newNode->left = nullptr;
            newNode->right = nullptr;
            return newNode;
        }
        else if (root->data > val) {
            root->left = insertion(root->left, val);
        }
        else {
            root->right = insertion(root->right, val);
        }
        return root;
    }

    int LeafCount(node* root)
    {
        if (root == nullptr) {
            return 0;
        }
        if (!(root->left || root->right)) {
            return 1;
        }
        return (LeafCount(root->left) + LeafCount(root->right));
    }

    void print(node* root)
    {
        if (root == nullptr) {
            return;
        }
        print(root->left);
        cout << root->data << ' ';
        print(root->right);
    }
};

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
