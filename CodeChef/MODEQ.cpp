// https://www.codechef.com/MAY21B/problems/MODEQ

#include <bits/stdc++.h>
using namespace std;
#define lli long long int

lli ans(lli N, lli M){
      lli var = 0;
      vector<lli> v(N+1, 1);
      for (lli i = 2; i <= N ; i++) {
            lli MyAval = M%i;
            var += v[MyAval];
            for (lli j = MyAval ;j <= N; j+=i)   v[j]++;
      }
      return var;
}

void solution() {
      lli N, M;  cin >> N >> M;
      cout << ans(N, M) << endl;
}

int main() {
    long test;
    cin >> test;
    while (test--)    solution();
  return 0;
}
