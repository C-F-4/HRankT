/*
Convert the BST into Singly Linked List ?
 

 
Sample Input Test Case 1:
10
20
30
5
7
4
-1
 
Sample Output Test Case 2:
30
20
10
7
5
4
 
Explanation:
Input:
The random elements are entered to create a BST, until -1 is pressed.  A BST is a binary tree of nodes ordered in the following way:
Each node contains data 
The elements in the left subtree are < (less) than/=(equal to) the parent node.
The elements in the right subtree > (greater) than the parent node.
Output:
Once the tree has been created, inorder of the tree is calculated and thus forming the singly linked list (Following insertion at the beginning fashion) and printing it. In above sample Test case, inorder of the tree is formed as 4 5 7 10 20 30 and linked list formed as 30 20 10 7 5 4. 
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class test {

    struct node //for BST
        {
        int info;
        struct node* left;
        struct node* right;
    };

    struct singly //for singly linked list
        {
        int info;
        struct singly* next;
    };
    singly* pt;
    node* root;
    singly* start;

protected:

    struct node* createTreeNode(int val)
    {
        struct node* newNode = new struct node;
        newNode->info = val;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }
    
    struct singly* createListNode(int val)
    {
        struct singly* newNode = new struct singly;
        newNode->info = val;
        newNode->next = nullptr;
        return newNode;
    }

    struct node* insertTreeNode(struct node* cur, int val)
    {
        if (cur == nullptr) {
            return createTreeNode(val);
        }
        else if (cur->info > val) {
            cur->left = insertTreeNode(cur->left, val);
        }
        else {
            cur->right = insertTreeNode(cur->right, val);
        }
        return cur;
    }

    struct singly* insertListNode(struct singly* head, int val)
    {
        if (head == nullptr) {
            head = createListNode(val);
        }
        else {
            struct singly* cur = head;
            while (cur->next != nullptr) {
                cur = cur->next;
            }
            cur->next = createListNode(val);
        }
        return head;
    }

    struct singly* reverseList(struct singly* prev, struct singly* cur, struct singly* nxt)
    {
        if (cur == nullptr) {
            return cur;
        } // in case of empty list
        cur->next = prev;
        if (nxt == nullptr) {
            return cur;
        } // base case
        return reverseList(cur, nxt, nxt->next);
    }

    struct singly* inorder_print(struct singly* start, struct node* cur)
    {
        if (cur == nullptr) {
            return start;
        }
        start = inorder_print(start, cur->left);
        start = insertListNode(start, cur->info);
        start = inorder_print(start, cur->right);
        return start;
    }

public:
    test()
    {
        start = nullptr;
        pt = nullptr;
        root = nullptr;
    }

    ~test()
    {
        start = nullptr;
        pt = nullptr;
        root = nullptr;
    }

    void create(void)
    {
        int i = 0;
        cin >> i;
        while (i != -1) {
            root = insertTreeNode(root, i);
            cin >> i;
        }
        return;
    }
    
    void inorder()
    {
        if (root == nullptr) {
            return;
        }
        this->start = inorder_print(this->start, root);
        this->start = reverseList(nullptr, this->start, this->start->next);
        return;
    }
    
    void display()
    {

        pt = start;
        while (pt != NULL) {

            cout << pt->info << endl;
            pt = pt->next;
        }
    }
};

// stub
int main()
{
    test ob;
    ob.create(); //creation of binary search tree
    ob.inorder(); //find its inorder traversal
    ob.display(); //display the singly linked list
    return 0;
}
