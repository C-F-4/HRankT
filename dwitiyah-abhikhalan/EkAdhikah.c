/*
Vedic Maths can mean two things - either the ancient Indian Mathematics that evolved during the Vedic era or a system of 
Mathematics developed by Swami Bharati Krishna Tirathji. The latter claims that all of Mathematics can be solved using 16
One-Line Sutras (Formulae) and their corolloaries.

Ek Adhikean Purvena (एकाधिकेन पूर्वेण) is one of the formulae. It basically means 'By One more than the previous one'. It is 
often referred to as the Ek Adhikah (एक अधिक:) Sutra.

For example, the Integral of x^n w.r.t. dx is x^n+1/n+1. This is an example of application of Ek Adhikah in Calculus. 
It can be applied in various other branches like Trigonometry, Conics and Algebra.

For believers of Vedic Maths, its not surprising that Ek Adhikah exists even in Programming in form of the post and 
pre increment operators.

Your task, is to create a program (function) that acts like a modified increment operator, which works as follows: 
If the Integer is Odd, the output is the same Integer. When the Integer is Even, the output is Integer+1.

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

For each input, the output will be either the same Integer or Integer+1 based on whether the Integer is Odd or Even respectively.

Sample Input 0

5
1
2
3
4
5
Sample Output 0

1
3
3
5
5
Explanation 0

Numbers 1,3 & 5 are Odd Numbers. So the output remains the same as input i.e., 1,3 & 5 respectively. 2 & 4 are Even Numbers so 
they are both incremented by 1 and the output is 3 and 5 respectively.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void even_odd(unsigned int ct) {
    if(!ct) { return; }
    int tmp;
    scanf("%d", &tmp);
    (tmp & 1 && printf("%d", tmp) || printf("%d", tmp|1));
    printf("\n");
    even_odd(ct-1);
}

int main() {
    unsigned int size;
    scanf("%d", &size);
    even_odd(size);
    return 0;
}
