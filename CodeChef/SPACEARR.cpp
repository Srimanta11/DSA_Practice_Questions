// https://www.codechef.com/MARCH21C/problems/SPACEARR

#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define db double
#define f(i, start, end, offset) for( i = start; i < end; i += offset)

using namespace std;

void solution() {
    int N, count = 0, temp, i, flag = 0;
    cin >> N;
    int arr[N], validity[N] = {0}; 
    f(i, 0, N, 1)  cin >> arr[i];

    sort(arr, arr+N);
    if (arr[0] != 1) {
      cout << "Second" << endl;
      flag = 1;
    }

    f(i, 0, N, 1) {
      if (flag == 1)  break;
      if (arr[i] > i+1){
        cout << "Second" << endl;
        flag = 1;
        break;
      } else {
        while(arr[i] < i+1){
          count++;
          arr[i]++;
        }
      }
    }
    
    if (flag == 0) {
      if (count%2 == 0) cout << "Second" << endl;
      else cout << "First" << endl;
    }
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
