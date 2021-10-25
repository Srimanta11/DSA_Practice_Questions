// All are equal
#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vi>
#define pb push_back
#define ff first
#define ss second
#define int long long
const int N=1e5+7, MOD=1e9+7;



signed main(){
    fast;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi a(n);
        for(int &i: a) cin>>i;
        bool same=1;
        int minn = a[0];

        rep(i,1,n){
            minn = min(minn, a[i]);
            if(a[i-1]!=a[i]) same = 0;
        }
        if(same) {
            cout<<-1<<endl; continue;
        }
        rep(i,0,n){
            a[i] = abs(a[i] - minn);
        }
        int ans=a[0];
        rep(i,1,n){
            ans = __gcd(ans, a[i]);
        }
       	cout<<ans;
        cout<<endl;
    }
    return 0;
}
