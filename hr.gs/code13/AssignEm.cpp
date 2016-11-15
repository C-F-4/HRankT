
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
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector< vector < int > > all_permutations(vector < int > f, int k,
                                     vector < vector<int> > permutations) {
  if (k == f.size()) {
    permutations.push_back(f);
    return permutations;
  } else {
    for (int i = k; i < f.size(); i++) {
      int tmp = f[k];
      f[k] = f[i];
      f[i] = tmp;
      permutations = all_permutations(f, k + 1, permutations);
      tmp = f[k];
      f[k] = f[i];
      f[i] = tmp;
    }
    return permutations;
  }
}

int PairUpCounter(vector < int > m, vector < int > f, int L) {
  int ct = 0;
  int n = m.size();
  vector < vector<int> > permutations;
  permutations = all_permutations(f, 0, permutations);

  for(unsigned int x = 0; x < permutations.size(); x++) {
    vector < pair < int, int > > match;
    vector < int > tmp = permutations[x];
    bool flag = true;
    for (int i = 0; i < n; i++) {
      pair < int, int > p;
      p = make_pair(tmp[i], m[i]);
      match.push_back(p);
      if (tmp[i] * m[i] >= L) {
        flag = false;
        break;
      }
    }
    if (flag) {
      ct ++;
    }
  }
  return ct;
}

int main() {
  int n, L;
  cin >> n >> L;
  vector < int > male(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> male[i];
  }
  vector < int > female(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> female[i];
  }
  cout << PairUpCounter(male, female, L) << endl;
  return 0;
}
