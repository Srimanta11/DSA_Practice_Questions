// https://www.codechef.com/MARCH21C/problems/GROUPS

#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define db double
#define f(i, start, end, offset) for( i = start; i < end; i += offset)

using namespace std;

void solution() {
    string S;
    cin >> S;
    lli i, count = 0, valid = 0;
    f(i,0,S.length() - 1,1)     if (S[i] == '1' && S[i+1] == '0' )      count++;
    if (S[S.length() - 1] == '1') {
        count++;
    }
    cout << count << endl;
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
