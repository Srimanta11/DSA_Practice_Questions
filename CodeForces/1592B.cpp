//https://codeforces.com/contest/1592/problem/B


#include <bits/stdc++.h>
 
#define ll long long int
#define ull unsigned long long 
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define REP(i,n) for(int i=0;i<n;i++)
#define w(t) int t; cin>>t; while(t--)
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
#define M_PI 3.14159265358979323846
 
using namespace std;


int main(){
    fast;
    int tc; cin>>tc; while(tc--){
        ll n,x; cin>>n>>x;
        vector<ll> v,b;
        for(int i=0;i<n;i++){
            ll el; cin>>el;
            v.pb(el); b.pb(el);
        }
        int flag=0;
        sort(b.begin(),b.end());
        for(int i=n-x;i<x;i++){
            if(v[i]!=b[i]){
                flag=1; break;
            }
        }
        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";
    }

}