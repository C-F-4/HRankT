/*
One of the most fundamental concepts in Mathematics is about parity of numbers. Sam (सम) and Visham (विषम) are the words used 
(in Hindi & Sanskrit) to describe Even and Odd Numbers respectively. A lot of real life applications involve Number Systems and 
concept of parity. Hence, questions based on the concept, are often asked in recruitment processes (either in Tests or Interviews)
of many different organizations.

I have often found many students/job-aspirants struggling with the easiest of questions. Amongst those who answer, many provide 
just the crude solutions.

This is the warm-up program for the contest and hence is very simple. The task is to print 0 if the input is an Odd number and 
1 if the input is an ever number.

NOTE: To be eligible for prizes, solve this problem without using any of the following:

if-else or switch construct
Increment & Decrement Operators (++,--)
ternary operator
arithmetic operators ( +, -, *, /, %) and relational operators (==, !=, <, <=, >, >=)
Left-Shift and Right-Shift Operators (<<,<<=,>>,>>=)
goto statement
library/builtin functions or methods except for input and output.
Also, it will be best if you achieve algorithimic complexity of O(1).

Input Format

The first line will contain an Integer T which will represent the number of test cases to follow. Next T lines will each contain 
an integer N.

Constraints

0 <= T <= 1000000
N is any 32-bit Integer 
Output Format

For each input, the output will be either 0 or 1 based on whether the Integer is Odd or Even respectively. 

Sample Input

5
1
2
3
4
5

Sample Output

0
1
0
1
0

Explanation

1, 3, 5 are odd numbers and hence output corresponding to each such number is 0. 2 and 4 are even numbers so corresponding output is 1.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void even_odd(unsigned int ct) {
    if(!ct) { return; }
    int tmp;
    scanf("%d", &tmp);
    (tmp & 1 && printf("0") || printf("1"));
    printf("\n");
    even_odd(ct-1);
}

int main() {
    unsigned int size;
    scanf("%d", &size);
    even_odd(size);
    return 0;
}
