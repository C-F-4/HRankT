/*
Suppose there is a linked list with n nodes. The only values contained in the linked list can be 0s, 1s and 2s.
Sort a linked list of 0s, 1s and 2s such that all the 0s occur first, then all the 1s and then all the 2s.
For example,
    n=9  (here n is number of nodes)
    Linked List Before Sorting
    2  1  2  1  1  2  0  1  0
    Linked List After Sorting
    0  0  1  1  1  1  2  2  2
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
#include <iostream>

using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;

// Utility function to create a new node.
struct Node* newNode(int data)
{
    struct Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else {
        Node* temp1 = head;
        while (temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}

void printList(struct Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

/*Bubble Sort*/
void swap(struct Node* a, struct Node* b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void sortList(struct Node* head)
{
    struct Node* ptr1 = head;
    if (ptr1 == nullptr) {
        return;
    }
    bool swapped = false;
    struct Node* lptr = nullptr;
    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

int main()
{
    /* Start with the empty list */
    int element, n;
    cin >> n;
    while (n != 0) {
    aa:
        cin >> element;
        if (element == 0 || element == 1 || element == 2)
            head = newNode(element);
        else
            goto aa;
        n--;
    }

    sortList(head);
    printList(head);
    return 0;
}
