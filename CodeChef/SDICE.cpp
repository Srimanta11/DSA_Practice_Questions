// Basic format for codechef solution C++17

#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define db double

using namespace std;

void solution() {
    lli N, ans = 0, red;
    cin >> N;
    red = N%4;
    if (red == 1) {
        ans += 20; 
    } else if (red == 2) {
        ans += 36;
    } else if (red == 3) {
        ans += 51;
    }

    if (N/4 > 0) {
        ans += (4-red)*4;
    }
    ans += (N/4)*44;
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
        long test;    cin >> test;
        while (test--)    solution();
    return 0;
}
