/*
"Anupooran (अनुपूरण)" is a Sanskrit word, which means "Complement".

In 498 AD, Indian mathematician and astronomer Aryabhata stated that "sthānāt sthānaṁ daśaguṇaṁ syāt;" i.e., "from 
place to place each is ten times the preceding," which is the origin of the modern decimal-based place value notation.

The oldest known text to use a decimal place-value system, including a zero, is the Jain text from India entitled 
the Lokavibhāga, dated 458 AD, where śūnya ("void" or "empty") was employed for this purpose. The first known use of 
special glyphs for the decimal digits that includes the indubitable appearance of a symbol for the digit zero, a 
small circle, appears on a stone inscription found at the Chaturbhuja Temple at Gwalior in India, dated 876 AD.

Without zero, the positional number system and hence the decimal & binary number systems would not exist.

In programming with binary numbers we use 1s and 2s complement. 9s and 10s complements are to Decimal Number System
what 1s and 2s complements are to Binary Number System. The ancient Indian Mathematicians like Aryabhata and his 
predecessors, often used 9s and 10s complements to make complex calculations a lot simpler.

Your task is to write a code that prints the 10s complement of a given number.

For example, 10s complement of 9 is 1; for 3 is 7; for 6 its 4. For 24 its 76 and for 50 its 50.

NOTE: To be eligible for prizes, solve this problem without using any library/builtin functions or 
methods except for input and output.

Input Format

The first line of input contains the number of testcases T (less than 100000). Each of the next T lines contain an Integer N.

Constraints

0 <= T <= 1000000
N is any 32-bit Integer
Output Format

For each test case, print the 10s complement of the respective Integer.

Sample Input

4
5
15
2345678
123456789

Sample Output

5
85
7654322
876543211

Explanation

7654322 is 10s complement of 2345678 since, 2345678 + 7654322 = 10000000
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int findn(int num) {
   if ( num < 10 )
      return 10;
   if ( num < 100 )
      return 100;
   if ( num < 1000 )
      return 1000;
   if ( num < 10000 )
      return 10000;
   if ( num < 100000 )
      return 100000;
   if ( num < 1000000 )
      return 1000000;
   if ( num < 10000000 )
      return 10000000;
   if ( num < 100000000 )
      return 100000000;
   if ( num < 1000000000 )
      return 1000000000;
   if ( num < 10000000000 )
      return 10000000000;
   return 100000000000;
}

int main() {
    int size, t;
    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &t);
        // 10's = 9's complement + 1
        // 9's complement = no of digits times 9 - number - 1;
        // 10's complement = no of digits times 9 - number;
        printf("%ld\n", findn(t) - t);
    }
    return 0;
}
