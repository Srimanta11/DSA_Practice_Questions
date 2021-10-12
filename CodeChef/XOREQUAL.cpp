// https://www.codechef.com/MAY21B/problems/XOREQUAL


#include <bits/stdc++.h>
#define lli long long int
#define M 1000000007

using namespace std;

lli power(lli n, lli a){
    lli powVal = 1;
    n = n % M;
    if (n == 0) return 0;
    while (a > 0){
        if(a&1)
            powVal = (powVal*n)%M;
        a >>= 1;
        n = (n*n)%M;
    }
    return powVal;
}

void solution() {
      lli N;  cin >> N;
      cout << power(2, N-1) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long test;
    cin >> test;
    while (test--)    solution();
  return 0;
}
