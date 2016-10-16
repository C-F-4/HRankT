/*
Each node of a Binary Search Tree (BST) has an integer value and pointers to two children, referred to as left child and right child. The value of left child is always less than the value of its parent node, and the value of right child is always greater than or equal to the value of its parent node.
 
The isPresent function in your editor has two parameters: a reference to the root node of a Binary Search Tree (BST) and an integer value. Complete isPresent so it returns 1 if the value is present in the BST, and returns 0 otherwise.
 
Constraints
1 ≤ total nodes ≤ 105
1 ≤ value ≤ 5 × 104
 
Sample Input 0

 
Values
30
10
12
15
 
Sample Output 0
1
1
1
0
 
Explanation
Value: 30. This value is present in the BST, so isPresent returns 1.
Value: 10. This value is present in the BST, so isPresent returns 1.
Value: 12. This value is present in the BST, so isPresent returns 1.
Value: 15. This value is not present in the BST, so isPresent returns 0.
 
Sample Input 1

 
Values
79
10
20
30
40
 
Sample Output 1
0
1
1
1
1
 
Explanation
Value: 79. This value is not present in the BST, so isPresent returns 0.
Value: 10. This value is present in the BST, so isPresent returns 1.
Value: 20. This value is present in the BST, so isPresent returns 1.
Value: 30. This value is present in the BST, so isPresent returns 1.
Value: 40. This value is present in the BST, so isPresent returns 1.

*/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class node {
public:
    int val;
    node *right, *left;
};

void insert(node** tree, node* item)
{
    if (!(*tree)) {
        *tree = item;
        return;
    }
    if (item->val < (*tree)->val) {
        insert(&(*tree)->left, item);
    }

    else if (item->val > (*tree)->val) {
        insert(&(*tree)->right, item);
    }
}
int isPresent(node* root, int val)
{
    if (root == NULL) {
        return 0;
    }
    if (root->val == val) {
        return 1;
    }
    if (root->val > val) {
        return isPresent(root->left, val);
    }
    return isPresent(root->right, val);
    /*
   The structure of the node is as follows:
      class node {
         public:
             node * left, *right;
             int val;
      };
    */
}

int main()
{
    node *_root, *root_curr;
    int root_i = 0, root_cnt = 0, root_num = 0;
    _root = NULL;
    cin >> root_cnt;
    for (root_i = 0; root_i < root_cnt; root_i++) {
        scanf("%d", &root_num);
        root_curr = (node*)malloc(sizeof(node));

        root_curr->left = root_curr->right = NULL;
        root_curr->val = root_num;

        insert(&_root, root_curr);
    }

    int q;
    cin >> q;

    while (q--) {
        int _x;
        cin >> _x;
        cout << isPresent(_root, _x) << endl;
    }
    return 0;
}
