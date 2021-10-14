// https://codeforces.com/contest/1498/problem/A

#include <iostream>
#define ll                  long long
using namespace std;


ll rsum(ll n)
{
	ll sum = 0;
	while (n > 0)
	{
		ll rem = n % 10;
		sum += rem;
		n = n / 10;
	}
	return sum;
}

ll gcd(ll a, ll b)
{
	if (!a)
		return b;
	return gcd(b % a, a);
}




void gcd(ll n)
{
	int f = 0;
	while (f == 0)
	{
		ll sum = rsum(n);

		ll gc;
		gc = gcd(sum, n);

		if (gc > 1)
		{
			cout << n << endl;
			return;
		}
		n++;
	}
}



int main(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	ll test_case;
	cin >> test_case;

	while (test_case--)
	{
		ll mx;
		cin >> mx;
		gcd(mx);

	}
	return 0;
}
