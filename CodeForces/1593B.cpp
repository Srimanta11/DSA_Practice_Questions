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
	vs v = {"00","25","75","50"};
	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(n%25==0){ cout<<0<<endl; continue; }
		string sn=to_string(n);
		int ans=19;
		rep(i,0,4){
			int p1=-1, p2=-1;
			rrep(j,sn.size()-1, 0){
				if(sn[j] == v[i][1]){
					p2=j; break;
				} 
			}
			rrep(j,p2-1,0){
				if(sn[j] == v[i][0]){
					p1=j; break;
				}
			}
			if(p1!=-1 and p2!=-1 and p1<p2){
				ans = min(ans, sn.size() - 2 - p1);
			}
		}
		cout<<ans;
		cout<<endl;
	}
	return 0;
}