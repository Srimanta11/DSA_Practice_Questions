// https://codeforces.com/contest/1472/problem/A

#include <bits/stdc++.h>

using namespace std;

void solution() {
  long w, h, n, p_w=1, p_h=1;
  cin >> w >> h >> n;
    while(w%2 == 0) {
      p_w *= 2;
      w /= 2;
    }
    while(h%2 == 0) {
      p_h *= 2;
      h /= 2;
    }
    if (p_h*p_w >= n)     cout << "YES" << endl;
    else    cout << "NO" << endl;
  
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}
