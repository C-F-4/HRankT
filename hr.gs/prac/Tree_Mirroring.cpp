/*
Mirror Image is defined as an image or object which is identical in form to another, but with the structure reversed. Construct the mirror image of the given BST? 
                           
                Original BST                                                                                   Mirror Image
 
                                                 
Sample Test Case 1:
10
20
30
5
4
7
-1
 
Sample Output Test Case 1:
10 5 20 4 7 30
10 20 5 30 7 4 
 
Explanation:
Input:
The random elements are entered to create a BST, until -1 is pressed.  A BST is a binary tree of nodes ordered in the following way:
Each node contains data 
The elements in the left subtree are < (less) than/=(equal to) the parent node.
The elements in the right subtree > (greater) than the parent node.
 
Output:
First line is the Level Order Traversing of Original BST.
Second line is the Level Order Traversing of Mirror Image of BST.
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

using std::cin;
using std::cout;
using std::clog;
using std::endl;
using std::queue;

class test {
    struct node //for BST
        {
        int info;
        struct node* left;
        struct node* right;
    };
    struct node* root;

protected:
    struct node* createTreeNode(int val)
    {
        struct node* newNode = new struct node;
        newNode->info = val;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    struct node* insertTreeNode(struct node* cur, int val)
    {
        if (cur == nullptr) {
            return createTreeNode(val);
        }
        else if (cur->info >= val) {
            cur->left = insertTreeNode(cur->left, val);
        }
        else {
            cur->right = insertTreeNode(cur->right, val);
        }
        return cur;
    }

public:
    test()
    {
        this->root = nullptr;
    }

    ~test()
    {
        this->root = nullptr;
    }

    void Create(void)
    {
        int i = 0;
        cin >> i;
        while (i != -1) {
            this->root = insertTreeNode(this->root, i);
            cin >> i;
        }
        return;
    }

    void LevelOrder(void)
    {
        if (this->root == nullptr) {
            clog << "Empty Tree";
        }
        else {
            queue<struct node*>* q = new queue<struct node*>();
            struct node* tmp = this->root;
            q->push(tmp);
            while (!q->empty()) {
                tmp = q->front();
                cout << tmp->info << ' ';
                if (tmp->left != nullptr)
                    q->push(tmp->left);
                if (tmp->right != nullptr)
                    q->push(tmp->right);
                q->pop();
            }
        }
        cout << endl;
        return;
    }
    
    void Mirror(void)
    {
        if (this->root == nullptr) {
            clog << "Empty Tree";
        }
        else {
            queue<struct node*>* q = new queue<struct node*>();
            struct node* tmp = this->root;
            q->push(tmp);
            while (!q->empty()) {
                tmp = q->front();
                cout << tmp->info << ' ';
                if (tmp->right != nullptr)
                    q->push(tmp->right);
                if (tmp->left != nullptr)
                    q->push(tmp->left);
                q->pop();
            }
        }
        cout << endl;
        return;
    }
};

int main()
{
    test ob;
    ob.Create();
    ob.LevelOrder();
    ob.Mirror();
    return 0;
}

