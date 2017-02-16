/*
Though every Vedic Mathematics formula has its own vast applications and for elementary mathematical problems they almost 
always provide solutions in one or two lines; using them in conjunction with one or two other formulae results in incredibly 
short solutions even for higher & complex mathematical problems.

image

One such scenario is to combine Ek Adhika and Ek Nyunenah formulae together.

Your task, is to create a program (function) that acts like a new decrement-increment operator(-+), which works as follows: 
If the Integer is Odd, the output is Integer-1. When the Integer is Even, the output is Integer+1.

NOTE: To be eligible for prizes, solve this problem without using any of the following:

if-else or switch construct
Increment & Decrement Operators (++,--)
ternary operator
arithmetic operators ( +, -, *, /, %) and relational operators (==, !=, <, <=, >, >=)
Left-Shift or Right-Shift Operators (<<,<<=,>>,>>=)
goto statement
library/builtin functions or methods except for input and output.
Also, it will be best if you achieve algorithimic complexity of O(1).

Input Format

The first line will contain an Integer T which will represent the number of test cases to follow. Next T lines will 
each contain an integer N.

Constraints

0 <= T <= 1000000
N is any 32-bit Integer
Output Format

For each input, the output will be either Integer-1 or Integer+1 based on whether the Integer is Odd or Even respectively.

Sample Input 0

5
1
2
3
4
5
Sample Output 0

0
3
2
5
4
Explanation 0

1,3 & 5 are odd numbers and hence the output is decremented by 1 in each case resulting in 0,2 & 4. 2 and 4 are 
Even Numbers so the output is incremented by 1 in each case resulting in 3 and 5.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void even_odd(unsigned int ct) {
    if(!ct) { return; }
    int tmp;
    scanf("%d", &tmp);
    (tmp & 1 && printf("%d", tmp&(~1)) || printf("%d", tmp|1));
    printf("\n");
    even_odd(ct-1);
}

int main() {
    unsigned int size;
    scanf("%d", &size);
    even_odd(size);
    return 0;
}
