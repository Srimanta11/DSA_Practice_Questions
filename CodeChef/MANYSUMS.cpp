// https://www.codechef.com/COOK126C/problems/MANYSUMS

#include <bits/stdc++.h>

using namespace std;

void solution() {
  long long int n, r;
  cin >> n >> r;
  cout << 2*(r-n+1) - 1 << endl;
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}
