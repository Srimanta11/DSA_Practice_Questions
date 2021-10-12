// https://www.codechef.com/MAY21B/problems/VPATH

#include <bits/stdc++.h>
#define mod 1000000007 
#define ll long long int
#define f(i, start, end) for(ll i = start; i < end; i++)

using namespace std;

void dfs(int ,int );
vector<vector<int>> v;
vector<ll> dp,tot;
ll ans=0; 

void solution() {      
    ans=0;
    ll N;
    cin >> N;
    v.resize(N+1),dp.resize(N+1),tot.resize(N+1);
    f(i,0,N-1)
    {
        int l,r;
        cin >> l >> r;
        v[l].push_back(r),v[r].push_back(l);
    }
    dfs(1,1);
    ll ans = tot[1]%mod;    
    cout << ans << endl;
    dp.clear(), v.clear(), tot.clear();
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

void dfs(int cur,int par) {
    dp[cur]=1,tot[cur]=1;
    ll sum=0, cnt=0;
    f(i,0,v[cur].size()) {
        ll node=v[cur][i];
        if(node!=par) {
            dfs(node,cur);
            dp[cur]+=((2* dp[node])%mod), dp[cur]%=mod, cnt++,tot[cur]+=tot[node], tot[cur]%=mod, tot[cur] += dp[node], tot[cur] %= mod;
            sum+=dp[node];
        }
    }
    f(i,0,v[cur].size()) {
        int node=v[cur][i];
        if(node!=par) {
            tot[cur] += (dp[node]*((sum-dp[node]+mod)%mod))%mod;
            tot[cur] %= mod;
        }
    }
}
