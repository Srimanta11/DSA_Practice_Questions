// https://codeforces.com/contest/1475/problem/B

#include <bits/stdc++.h>

using namespace std;

void solution() {
    long long int n, a, b;
    cin >> n;
    a = n/2020;
    b = n%2020;
    if (a >= b)     cout << "YES" << endl;
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
