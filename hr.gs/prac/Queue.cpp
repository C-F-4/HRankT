/*
In this challenge, you must first implement a queue using two stacks. Then process  queries, where each query is one of the following  types:

1 x: Enqueue element  into the end of the queue.
2: Dequeue the element at the front of the queue.
3: Print the queue.
Input Format

The first line contains a single integer, , denoting the number of queries. 
Each line  of the  subsequent lines contains a single query in the form described in the problem statement above. All three queries start with an integer denoting the query , but only query  is followed by an additional space-separated value, , denoting the value to be enqueued.

Constraints
q      [1, 10^5]
type   [1,3]
mod(x) [1, 10^9]
It is guaranteed that a valid answer always exists for each query of type .
Output Format

For each query of type , print the elements of the queue.
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

#define MAX_SIZE 100

using namespace std;

class Queue {
    private:
        long *a,
              front, rear;
        int size, del;
        
    public:
        Queue() {
            size = MAX_SIZE;
            a = new long[size];
            front = 0;
            rear = -1;
            del = 0;
        }
        
        ~Queue() {
            delete []a;
            size = 0;
            front = 0;
            rear = -1;
        }
        
        void enqueue(long x) {
            // Insert in the end(front) of the array
            if(!isFull()) {
                a[++rear] = x;
            }
            else {
                // double the size
                a = doubleSize();
                a[++rear] = x;
            }
        }
        
        long *doubleSize(void) {
            int tmp = size;
            size *= 2;
            long *tmpbuf = new long[size];
            for(int i = 0; i < tmp-del; i++) {
                tmpbuf[i] = a[i+del];
            }
            a = tmpbuf;
            delete[] tmpbuf;
            return a;
        }
        
        void dequeue(void) {
            // Remove from rear of the array
            if(isEmpty()) {
                clog << "Already an empty list";
            }
            else {
                front ++;
                del++;
            }
        }
        
        void print() {
            if(isEmpty()) {
                clog << "Empty Queue" << endl;
            }
            for(int i = front; i <= rear; i++) {
                cout << a[i] << endl;
            }
        }
        
        bool isEmpty() {
            return (front == -1 && rear == -1);
        }
        
        bool isFull() {
            return (rear == size - 1);
        }
};

int main() {
    Queue q;
    int t_case;
    cin >> t_case;
    for(int i = 0; i < t_case; i++) {
        int q_type;
        cin >> q_type;
        if(q_type == 1) {
            long x;
            cin >> x;
            q.enqueue(x);
        }
        else if(q_type == 2) {
            if(!q.isEmpty())
                q.dequeue();
            else
                clog << "Already empty" << endl;
        }
        else if(q_type == 3) {
            q.print();
        }
    }
    return 0;
}
