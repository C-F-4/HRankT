/*
 Question: Candy-Replenishing-Robot.png
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int c_i = 0; c_i < t; c_i++){
       cin >> c[c_i];
    }
    int bowl = n;
    int extraCandies = 0;
    for(int i = 0; i < t; i++) {
        if(c[i] > bowl) {
            extraCandies += n - bowl;
            bowl = n;
            //clog << "+Bowl: " << bowl << endl;
        }
        if(c[i] <= bowl) {
            bowl -= c[i];
            //clog << "-Bowl: " << bowl << endl;
        }
    }
    cout << extraCandies << endl;
    return 0;
}
