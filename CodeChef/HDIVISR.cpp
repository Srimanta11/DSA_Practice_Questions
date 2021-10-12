// https://www.codechef.com/FEB21C/problems/HDIVISR

#include <bits/stdc++.h>

using namespace std;

void solution() {
    int n, i;
    cin >> n;
    for ( i = 10 ; i > 0 ; i--){
        if(n%i == 0) {
            break;
        }
    }
    cout << i << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
    solution();
  return 0;
}
