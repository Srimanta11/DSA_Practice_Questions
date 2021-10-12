// https://www.codechef.com/APRIL21B/problems/KAVGMAT

#include <bits/stdc++.h>
#define lli long long int

using namespace std;

void solution() {
    lli N, M, K, MYANS = 0; cin >> N >> M >> K;
    lli MIND = min(N,M);

    double Mat[N+1][M+1];
    for (lli i=0; i <=N; i++)  for (lli j=0; j<=M; j++) {
            if (i==0 || j==0) {
                Mat[i][j] = 0;
            } else {
                cin >> Mat[i][j];
            }    
    }
    for (lli i=0;i<=M; i++) {
        double pre=0;
        for (lli j=0; j<=N; j++) {
            Mat[j][i]+=pre;
            pre=Mat[j][i];
        }
    }
    
    for (lli i=0;i<=N; i++) {
        double pre=0;
        for (lli j=0; j<=M; j++) {
            Mat[i][j]+=pre;
            pre=Mat[i][j];
        }
    }
    
    for (lli l=1; l <=MIND; l++)       for(lli i=l; i <=N; i++)       for(lli j=l; j<=M; j++) {
                if (((Mat[i][j]+Mat[i-l][j-l]-Mat[i][j-l]-Mat[i-l][j])/(l*l))>=K) {
                    MYANS++;
                }
    }
    cout << MYANS << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
        long test;    cin >> test;
        while (test--)    solution();
    return 0;
}
