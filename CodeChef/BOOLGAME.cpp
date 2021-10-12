// https://www.codechef.com/APRIL21B/problems/BOOLGAME

#include <bits/stdc++.h>
using namespace std;

#define lli long long int

bool comp(const pair<lli,lli> &a, const pair<lli,lli> &b) {
	return a.first>b.first;
}

void input(vector<lli> &V1, lli n, lli m, vector<vector<pair<lli, lli>>> &V2) {
    lli i, u_Val, v_Val, d_Val;
    for (i = 0; i < n; i++)		cin >> V1[i+1];

	for (i = 0; i < m; i++){
		cin >> u_Val >> v_Val >> d_Val;
		V2[u_Val].push_back(make_pair(i, d_Val));

		V2[v_Val].push_back(make_pair(i, d_Val));

	}
}

void output(vector<vector<pair<lli, lli>>> &out, lli n, lli k) {
	lli i;
	for (i = 0; i < k; i++)     cout << out[n][i].first << " ";
}

void solution(){

	lli N, M, K, i, j, k;   cin >> N >> M >> K;

	vector<lli> myVT(N+1);
	vector<vector<pair<lli, lli>>> mymatrix(N+1), mymatrixdyn(N+1);

	input(myVT, N, M, mymatrix);

	mymatrixdyn[0].push_back(make_pair(0,0));

	for (i = 1; i <= N; i++){
		vector<pair<lli, lli>> consetp;
		set<lli> myset1;
		lli firstIdx = 0, secondIdx = 0;


		consetp.insert(consetp.end(), mymatrixdyn[i-1].begin(), mymatrixdyn[i-1].end());
		for (j = i; j >= 1; j--){
			firstIdx += myVT[j];
			secondIdx ^= 1LL << j;

			for (auto au:mymatrix[j]){
				if (myset1.count(au.first))		firstIdx += au.second;
				else	myset1.insert(au.first);
			}

			if(j > 1)		for (auto au:mymatrixdyn[j-2])		consetp.push_back(make_pair(au.first+firstIdx, secondIdx^au.second));
			else		consetp.push_back(make_pair(firstIdx, secondIdx));
		}

		sort(consetp.begin(), consetp.end(), comp);

		set<lli> myset2;
		lli checked = 0;

		for (j = 0; j < consetp.size() && checked < K; j++){
			if (myset2.count(consetp[j].second))		continue;
			mymatrixdyn[i].push_back(consetp[j]);
			checked++;
			myset2.insert(consetp[j].second);
		}
	}

	output(mymatrixdyn, N, K);
	
	cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
        long t;    cin >> t;
        while (t--)    solution();
    return 0;
}

