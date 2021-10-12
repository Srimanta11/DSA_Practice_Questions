// https://www.codechef.com/MARCH21C/problems/COLGLF4

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class dish{
	public:
	int p;
};


void solution() {
	long long int i, N, E, CH, flag = 0, ans = -1, val1, val2, K;
	dish d[3];
    cin >> N >> E >> CH >> d[0].p >> d[1].p >> d[2].p;

	vector<long long int> temp;

	for ( i = 0; i <= N+1; i++)		temp.push_back(i);

	for ( i = 0; i <= N ; i++) {

		val2 = upper_bound(temp.begin(), temp.end(), (CH-3*i)) - temp.begin() - 1;
		if (val2 == N+1 && val2+3*i>CH) continue;

		val1 = lower_bound(temp.begin(), temp.end(), (2*N - E - 2*i)) - temp.begin();
		if (val2<val1 || val1 == N+1) continue;

		if (d[2].p>d[0].p)	K = (val1<(N-i)?val1:(N-i));
		else	K = (val2<(N-i)?val2:(N-i));

		if (((K+2*i)>=(2*N-E)) && (K+3*i)<=CH) {

			long long int t =  d[0].p*(N-K-i) + d[1].p*i + d[2].p*K;
			if (flag == 0)		ans = t;
			else {
				if (ans > t )		ans = t;
			}
			flag = 1;
		}
	}
	
	if (flag == 0) 		ans = -1;
	
	cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long int test;
    cin >> test;
    while (test--)    solution();
  return 0;
}
