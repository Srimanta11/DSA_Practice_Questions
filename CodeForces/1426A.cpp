// https://codeforces.com/contest/1426/problem/A

#include <iostream>


using namespace std;

int main () {
    int t, n, x;
    cin>>t;
    while(t--) {
        cin>>n>>x;
        if (n>0 && n<3) {
            cout << 1 <<endl;
        } else {    
            cout << (int)((n-3)/x) + 2  << endl;
        }
    }
    return 0;
}
