// https://codeforces.com/contest/1506/problem/A

    #include <bits/stdc++.h>
    using namespace std;
    #define lli long long int
     
     
    void solution() {
            lli N, M, X, i, j;
            cin >> N >> M >> X;
            i = (X-1)/N;
            j = X - (i*N) - 1;
            cout <<  M*j + i + 1 << endl;
    }
     
    int main() {
            lli test;    cin >> test;
            while (test--)    solution();
        return 0;
    }
