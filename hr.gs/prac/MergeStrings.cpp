/*
Complete the mergeStrings function in your editor. It has 2 parameters:
A string, a.
A string, b.
 
Your function must merge strings a and b, and then return a single merged string. A merge operation on two strings is described as follows:
Append alternating characters from a and b, respectively, to some new string, mergedString.
Once all of the characters in one of the strings have been merged, append the remaining characters in the other string to mergedString.
 
Input Format
The locked stub code in your editor reads two strings, a and b, from stdin and passes them to your function.
 
Constraints
1 ≤ |a|, |b| ≤ 25000
 
Output Format
Your function must return the merged string. This will be printed to stdout by the locked stub code in your editor.
 
Sample Input 1
abc
def
 
Sample Output 1
adbecf
 
Sample Input 2
ab
zsd
 
Sample Output 2
azbsd
 
Explanation
Sample Case 1
a = abc
b = def
Taking alternate characters from both the strings , we get adbecf
Sample Case 2
a = ab
b = zsd
Taking alternate characters from both the strings , we get azbsd

Testcase 1: Success
Input [Download]
abc
def
Your Output
adbecf
Expected Output [Download]
adbecf
Testcase 2: Success
Input [Download]
ab
zsd
Your Output
azbsd
Expected Output [Download]
azbsd
Testcase 3: Success
Your Output
Output hidden
Testcase 4: Success
Your Output
Output hidden
Testcase 5: Success
Your Output
Output hidden
Testcase 6: Success
Your Output
Output hidden
Testcase 7: Success
Your Output
Output hidden
Testcase 8: Success
Your Output
Output hidden
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

/*
 * Complete the function below.
 */
string mergeStrings(string a, string b)
{
    string s(a.size() + b.size(), ' ');
    int a_ct = 0, b_ct = 0;
    int i = 0;
    for (i = 0; a_ct < a.size() && b_ct < b.size(); i++) {
        s[i] = a[a_ct++];
        s[++i] = b[b_ct++];
    }
    for (; a_ct < a.size(); a_ct++) {
        s[i++] = a[a_ct];
    }
    for (; b_ct < b.size(); b_ct++) {
        s[i++] = b[b_ct];
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string res;
    string _a;
    getline(cin, _a);

    string _b;
    getline(cin, _b);

    res = mergeStrings(_a, _b);
    fout << res << endl;

    fout.close();
    return 0;
}
