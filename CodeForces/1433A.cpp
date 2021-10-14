// https://codeforces.com/contest/1433/problem/A

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int t, n, x1, w;
    cin>>t;
    while(t--) {
        cin>>n;
        x1 = n%10;
        w = (int)log10(n) + 1;
        w = w*(w+1);
        w = w/2; 
        cout << ((x1-1)*10 + w )<< endl;
    }
    return 0;
}
