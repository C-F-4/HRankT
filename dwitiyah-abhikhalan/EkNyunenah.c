/*
Another formula of Vedic Mathematics is Ek Nyunena Purvena (एकन्यूनेन पूर्वेण). Literally, it means, 'By One less than the previous One'.

In Calculus when we differentiate x^n w.r.t. x we get nx^n-1, which is an example of application of Ek Nyunenah (एक न्यूनेनः) Formula.
Just like Ek Adhikah, it can be applied in Algebra, Trigonometry, Coordinate Geometry etc.

In Programming, we have decrement operators, which is the same as the formula.

Your task, is to create a program (function) that acts like a modified decrement operator, which works as follows:
If the Integer is Odd, the output is Integer-1. When the Integer is Even, the output is the same Integer.

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

The first line will contain an Integer T which will represent the number of test cases to follow. Next T lines will each
contain an integer N.

Constraints

0 <= T <= 1000000
N is any 32-bit Integer
Output Format

For each input, the output will be either the same Integer-1 or Integer based on whether the Integer is Odd or Even respectively.

Sample Input 0

5
1
2
3
4
5
Sample Output 0

0
2
2
4
4
Explanation 0

1,3,5 are Odd Numbers and hence the output is Number-1 i.e., 1, 2 and 4 respectively. 2 & 4 are even numbers and hence the output 
remains the same as input i.e., 2 & 4 respectively.
 */
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void even_odd(unsigned int ct) {
    if(!ct) { return; }
    int tmp;
    scanf("%d", &tmp);
    (tmp & 1 && printf("%d", tmp&(~1)) || printf("%d", tmp));
    printf("\n");
    even_odd(ct-1);
}

int main() {
    unsigned int size;
    scanf("%d", &size);
    even_odd(size);
    return 0;
}
