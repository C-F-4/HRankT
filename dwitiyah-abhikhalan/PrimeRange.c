/*
There are hints in the surviving records of the ancient Egyptians that they had some knowledge of prime numbers: 
the Egyptian fraction expansions in the Rhind papyrus, for instance, have quite different forms for primes and 
for composites. However, the earliest surviving records of the explicit study of prime numbers come from the 
Ancient Greeks. Euclid's Elements (circa 300 BC) contain important theorems about primes, including the infinitude
of primes and the fundamental theorem of arithmetic. Euclid also showed how to construct a perfect number from a
Mersenne prime. The Sieve of Eratosthenes, attributed to Eratosthenes, is a simple method to compute primes, 
although the large primes found today with computers are not generated this way.

After the Greeks, little happened with the study of prime numbers until the 17th century. In 1640 Pierre de 
Fermat stated (without proof) Fermat's little theorem (later proved by Leibniz and Euler). 
Fermat also conjectured that all numbers of the form 22n + 1 are prime (they are called Fermat numbers) 
and he verified this up to n = 4 (or 216 + 1). However, the very next Fermat number 232 + 1 is composite 
(one of its prime factors is 641), as Euler discovered later, and in fact no further Fermat numbers are 
known to be prime. The French monk Marin Mersenne looked at primes of the form 2p − 1, with p a prime. 
They are called Mersenne primes in his honor.

Your task is to help modern Mathematicians by creating a program that prints all prime numbers in a specified range.

Input Format

The first line of input contains the number of testcases T (less than 20). Each of the next T lines contain an 
Integer Range, i.e., 2 Integers (0 <= R1,R2 <= 100000000) separated by a hyphen.

Constraints

0 < T < 20
0 <= R1,R2 <= 10^8
Output Format

For each Range, i.e., for each pair of R1 and R2, print all prime numbers (separated by single space) that occur 
between R1 and R2 (inclusive). For next Range, do the same in new line.

Prime Numbers belonging to the same test case are separated by a single space. Corresponding output for each 
test case is printed in a new line.

Sample Input

5
0-10
10-100
2-11
100-500
9999990-10000000

Sample Output

2 3 5 7
11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
2 3 5 7 11
101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 317 331 337 347 349 353 359 367 373 379 383 389 397 401 409 419 421 431 433 439 443 449 457 461 463 467 479 487 491 499
9999991

Explanation

When the input pair is 0-10 all prime number between 0 & 10 are printed. The numbers are separated by single space. Similarly,
for the next input pair of 10-100 the output begins in a new line & all prime numbers between 10 & 100 are printed.

Prime Numbers belonging to the same test case are separated by a single space. Corresponding output for each test case is printed
in a new line.
*/

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
void calculate_primes(vector<int>& primes);
int main() {
  vector<int> primes(32001, 1);  
  calculate_primes(primes);
  int cases;
  cin >> cases;
  for (int t = 0; t < cases; t++) {
    long long int m, n, i, j;
    char ch;
    cin >> m >> ch >> n;
    vector<int> sieve(n - m + 1, 1);  // (1 for  prime, 0 for composite)
    for (i = 2; i <= 32000; i++) {
      /* Proceed only if i is prime*/
      if (primes[i] == 1) {
        /* If m is divisible by, we start j from m/i , else from the next
         * value*/
        if (m % i == 0) {
          j = m / i;
        } else {
          j = m / i + 1;
        }
        /* Very Critical Case: If j comes out to be 1, or less than i*/
        if (j < i) {
          j = i;
        }
        long long int temp = j * i;
        while (temp <= n) {
          sieve[temp - m] = 0;
          j++;
          temp = j * i;
        }
      }
    }

    if (m == 0) {
      sieve[0] = 0;
      sieve[1] = 0;  // 1 is always composte
    }

    if (m == 1) {
      sieve[0] = 0;  // 1 is always composte
    }

    for (i = 0; i < n - m + 1; i++) {
      if (sieve[i] == 1) cout << m + i << ' ';
    }
    cout << endl;
  }
  return 0;
}

void calculate_primes(vector<int>& primes) {
  primes[0] = 0;
  primes[1] = 0;
  for (long long int i = 2; i <= 32000; i++) {
    long long int j = i;
    long long int temp = j * i;
    while (temp <= 32000) {
      primes[temp] = 0;
      j++;
      temp = j * i;
    }
  }
}
