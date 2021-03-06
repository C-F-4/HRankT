/*
Write a code to count(print) internal nodes of the BST.
Internal Node
A node with at least one child.
Sampe Input
3//No. of nodes in the tree
12
10
9
Sample Output
12 10     //Internal Nodes
Explanation:
Sample Input: The first line contains the number of nodes in a Binary Search Tree.The next lines follow the data values of the nodes.
Sample Output: internal nodes.
*/

#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};
class bst
{
public:
    node* createnode(int);
    node* insertion(node*,int);
    int nodecount(struct node* ptr);
};

node* bst::createnode(int val) {
    struct node* newNode = new struct node;
    newNode->data = val;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

node* bst::insertion(node* root, int val) {
    if(root == nullptr) {
        return createnode(val);
    }
    else if(root->data > val){
        root->left = insertion(root->left, val);
    }
    else {
        root->right = insertion(root->right, val);
    }
    return root;
}

int bst::nodecount(struct node* ptr) {
    if(ptr == nullptr || (ptr->left == nullptr && ptr->right == nullptr)) {
        return 0;
    }
    else {
        cout << ptr->data << ' ';
        return (1 + nodecount(ptr->left) + nodecount(ptr->right));
    }
}

void print(struct node *root) {
    if(root == nullptr) return;
    print(root->left);
    cout << root->data << ' ';
    print(root->right);
}

int main(void) {
    size_t size = 0;
    cin >> size;
    bst *tree = new bst;
    struct node* root = nullptr;
    for(int i = 0; i < size; i++) {
        int tmp;
        cin >> tmp;
        root = tree->insertion(root, tmp);
    }
    tree->nodecount(root);     // Returns count of internal nodes
    return 0;
}
