// https://codeforces.com/contest/1466/problem/A

#include <bits/stdc++.h>

using namespace std;

void solution() {
    set<float> s;
    int n, temp;
    cin >> n;
    vector<int> v;
    for (int i=0; i < n ; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    for (int i=0; i < n ; i++) {
        for (int j=i+1; j < n ; j++) {
            if (v[i]!=v[j]) {
                s.insert((float)abs(v[j]-v[i])*0.5);
            }
        }
    }
    cout <<  s.size() << endl;
    s.clear();
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}
