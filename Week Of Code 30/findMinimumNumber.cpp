/*
 * Find-Minimum-Number.png
 */
 
#include <bits/stdc++.h>

using namespace std;

void printCallStack(int args, string base, string comp) {
    for(int i = args; i >= 2; i--) {
        if(i == 2) {
            cout << comp;
        }
        else {
            cout << base;
        }
    }
    for(int i = args; i > 2; i--) {
        cout << ')';
    }
    cout << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    string baseFn = "min(int, ";
    string compFn = "min(int, int)";
    printCallStack(n, baseFn, compFn);
    return 0;
}
