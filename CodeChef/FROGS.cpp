// https://www.codechef.com/FEB21C/problems/FROGS

#include <bits/stdc++.h>

using namespace std;

class Frog {
    public:
     int W, L, P;
};

int intset[5] = {0};

void solution() {
    int n, count = 0;
    Frog f[5];
    cin >> n;
    for (int i = 0; i < n ; i++)  {
        cin >> f[i].W;
        intset[f[i].W] = 1;
        f[i].P = i + 1;
    }
    for (int i = 0; i < n ; i++)        cin >> f[i].L;
    
    for (int i = 1; i < 5 ; i++) {
        if (intset[i]) {
            int j, k;
            for (j = 0; j < n ; j++) {
                if (f[j].W == i)    break;
            }
            for (k = 0; k < n; k++) {
                if (f[k].P <= f[j].P && j!=k && f[k].W > f[j].W) {
                    while(f[k].P <= f[j].P)  {
                        count++;
                        f[k].P += f[k].L;
                    }
                }
            }
        }
    }

    cout << count << endl << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int test;
    cin >> test;
    while (test--) {
        solution();
    }
  return 0;
}
