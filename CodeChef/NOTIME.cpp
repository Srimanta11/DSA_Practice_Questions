// https://www.codechef.com/MARCH21C/problems/NOTIME

#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define db double
#define f(i, start, end, offset) for( i = start; i < end; i += offset)

using namespace std;

void solution() {
    int N, H, x, i, temp, flag = 0;
    cin >> N >> H >> x;
    f(i, 0, N, 1) {
        cin >> temp;
        if (temp >= (H-x))      flag = 1;
    }

    if(flag == 1)  cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long test = 1;
    while (test--)    solution();
  return 0;
}
