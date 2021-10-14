// https://codeforces.com/contest/1451/problem/A

#include <bits/stdc++.h>

using namespace std;


int find_move(int num) {
    if(num == 1)   return 0;
    else if(num == 2)   return 1;
    else if (num == 3)   return 2;
    else if(num%2 == 0)   return 2;
    else return 3;
}

void solution() {
    long no;
    cin >> no;
    cout << find_move(no) << endl;
}

int main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}
