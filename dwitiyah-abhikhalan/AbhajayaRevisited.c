/*
"Abhajya (अभाज्य)" is a Sanskrit word which means 'something which can not be divided'. Ancient Indian Mathematicians used to refer 
to Prime Numbers as "Abhajya Sankhya (अभाज्य संख्या)".

A prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself. A natural 
number greater than 1 that is not a prime number is called a composite number. For example, 5 is prime because 1 and 5 are its 
only positive integer factors, whereas 6 is composite because it has the divisors 2 and 3 in addition to 1 and 6. The fundamental
theorem of arithmetic establishes the central role of primes in number theory: any integer greater than 1 can be expressed as a
product of primes that is unique up to ordering.

There are infinitely many primes, as demonstrated by Euclid around 300 BC. There is no known useful formula that sets apart all 
of the prime numbers from composites. However, the distribution of primes, that is to say, the statistical behaviour of primes 
in the large, can be modelled. The first result in that direction is the prime number theorem, proven at the end of the 19th 
century, which says that the probability that a given, randomly chosen number n is prime is inversely proportional to its 
number of digits, or to the logarithm of n.

As of January 2017, the largest known prime is (2^74207281 -1) and has 22,338,618 decimal digits!

The property of being prime (or not) is called primality. Your task is write a program that does the primality testing. That 
is, given a number it should tell you whether the number is a prime number or not.

Input Format

The first line of input contains the number of testcases T (0 < T <= 1000000). Each of the next T lines contain an Integer 
(0 <= N <= 100000000).

Constraints

0 < T <= 1000000
0 <= N <= 100000000
Output Format

For each test case, print the PRIME if the number is a prime number, otherwise print NOT PRIME

Sample Input 0

7
1
2
15
127
255
65535
80000
Sample Output 0

NOT PRIME
PRIME
NOT PRIME
PRIME
NOT PRIME
NOT PRIME
NOT PRIME
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void primality(unsigned int ct) {
    if(!ct) { return; }
    int tmp;
    scanf("%d", &tmp);
    int x = (int) sqrt(tmp);
    int flag = 1;
    for(int i = 2; i <= x; i++) {
        if(!(tmp%i)) {
            flag=0;break;
        }
    }
    (flag && tmp>1)?(printf("PRIME\n")):(printf("NOT PRIME\n"));
    primality(ct-1);
}

int main() {
    unsigned int size;
    scanf("%d", &size);
    primality(size);
    return 0;
}
