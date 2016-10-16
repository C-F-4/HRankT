/*
Q.1 Consider the sorted list. Sansa wants to make the computer program which inserts any random number into the list such that list remains always sorted.
Sample Input Test Case 1:
 88
77
66
55
44
33
-1
53
Sample Output Test Case 2:
33
44
53
55
66
77
88
 
Explanation:
Sample Input:
Numbers are entered in the list in the decreasing order until -1 is entered. Assuming that numbers are inserted in list following "insertion at beginning" fashion. The last line contains the number that needs to be inserted in the list.
 
 Sample Output:
All numbers in the list are displayed after the insertion of the number to its appropriate position, such that list remains sorted.
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

class linked_list {
    struct node {
        int info;
        node* next;
    };
    struct node* start;

public:
    linked_list()
    {
        start = NULL;
    }
    
    void create_ll(void)
    {
        int d;
        cin >> d;
        while (d != -1) {
            insert_beg(d);
            cin >> d;
        }
        return;
    }
    
    struct node* createNode(int d)
    {
        struct node* newNode = new struct node;
        newNode->info = d;
        newNode->next = nullptr;
        return newNode;
    }
    
    void insert_beg(int d)
    {
        struct node* newNode = createNode(d);
        newNode->next = start;
        start = newNode;
        return;
    }
    
    void insert_sorted(void)
    {
        int d;
        cin >> d;
        struct node* newNode = createNode(d);
        struct node* ptr = start;
        if (ptr == nullptr || ptr->info >= d) {
            newNode->next = start;
            start = newNode;
            return;
        }
        while (ptr && ptr->next) {
            if (ptr->info <= d && ptr->next->info > d) {
                break;
            }
            ptr = ptr->next;
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
        return;
    }
    
    void show(void)
    {
        if (start == nullptr) {
            clog << "Empty" << endl;
        }
        struct node* ptr = start;
        while (ptr) {
            cout << ptr->info << endl;
            ptr = ptr->next;
        }
        return;
    }
};
int main()
{
    linked_list obj;
    obj.create_ll();
    obj.insert_sorted();
    obj.show();
    return 0;
}
