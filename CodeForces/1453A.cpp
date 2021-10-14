// https://codeforces.com/contest/1453/problem/A

#include <bits/stdc++.h>

using namespace std;

void solution() {
    int n, m, temp, count = 0 ;
    vector<int> v;
    cin >> n >> m;
    for (int i =0 ; i< n ; i++){
        cin >> temp;
        v.push_back(temp);
    }
    for (int i =0 ; i< m ; i++){
        cin >> temp;
        vector<int>::iterator h = find(v.begin(), v.end(), temp);
        if (h!=v.end()){
            count++;
        }
    }
    cout << count << endl;
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}
