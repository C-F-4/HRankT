/*
During On-Campus Recruitment process, Technical Interviewers often start by asking some easy questions. This is done to make the 
Interviewee comfortable and reduce anxiety. Questions related to GCD (Greatest Common Divisor) also known as HCF (Highest Common Factor)
are quite common during Interviews.

When Akhil appeared for Interview, he was asked to write different programs to find GCD/HCF of two Integers. As it is with 
exceptional candidates, Akhil provided multiple solutions for the same.

Now, you have been asked to do the same. Given two 64-bit Integers, you need to write a program to find their GCD/HCF.

NOTE: To be eligible for prizes, write the program without using any library functions except for input and output.

Input Format

The first line will contain an Integer T which will represent the number of test cases to follow. Next T lines will each 
contain two integers N & M separated by space.

Constraints

0 <= T <= 1000000
N and M are 64-bit Integers
Output Format

For each pair of Integers the corresponding output will consist of one Integer G which is the GCD/HCF of the two Integers.

Sample Input 0

5
24 36
1 0
0 4
1367 1369
210 3795
Sample Output 0

12
1
4
1
15
Explanation 0

Clearly GCD of 24 and 36 is 12. GCD of 1 & 0 is 1 GCD of 0 & 4 is 4 GCD of 1367 and 1369 is 1 GCD of 210 and 3795 is 15
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long gcd(long a, long b) {
    if(!b) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}

void gcd_wrapper(int ct) {
    if(!ct) { return; }
    long a, b;
    scanf("%ld %ld", &a, &b);
    // print gcd of a and b where a&b are 64-bit integers
    printf("%ld\n", gcd(a, b));
    gcd_wrapper(ct-1);
}

int main() {
    int cases;
    scanf("%d", &cases);
    gcd_wrapper(cases);
    return 0;
}
