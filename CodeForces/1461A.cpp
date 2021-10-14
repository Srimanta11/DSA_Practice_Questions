// https://codeforces.com/contest/1461/problem/A

#include <iostream>
#include <string>
using namespace std;

char c[3] = {'a', 'b', 'c'};

int main () {
    int t, n, k, l;
    cin >> t;
    char *s;
    while(t--) {
        l = 0;
        cin >> n >> k;
        s = new char[n+1];
        s[n] = '\0';
        for (int i = 0; i < n; i++) {
            s[i] = c[l++];
            l = l%3;
        }
        cout << s << endl;
        delete [] s;
    }
    
    return 0;
}
