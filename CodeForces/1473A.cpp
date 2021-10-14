// https://codeforces.com/contest/1473/problem/A

#include <bits/stdc++.h>

using namespace std;

void solution() {
    int n, d, flag = 0;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > d)   flag++;
    }
    if (flag == 0) {
        cout << "YES" << endl;
    } else {
        sort(a, a+n);
        if (a[0]+a[1] <= d){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}
