// https://www.codechef.com/MARCH21C/problems/IRSTXOR

#include <iostream>
#include <cmath>

#define lli long long int

using namespace std;

void solution() {
    lli C, val, d, temp;
    cin >> C;
    d = log2(C) + 1;
    val = pow(2,d); 
    temp = pow(2,d-1) - 1;
    cout << temp*(temp + val - C) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    long test;
    cin >> test;
    while (test--)    solution();
  return 0;
}
