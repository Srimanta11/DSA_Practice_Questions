// https://www.codechef.com/MARCH21C/problems/PAPARAZI

#include <iostream>
#include <vector>

#define lli long long int

using namespace std;

class Mydata {
  public:
  lli x;
  lli y;
};

void solution() {
    double Val1, Val2;
    lli N, ans = 1, Mysize;    cin >> N;
    Mydata d[N]; 
    vector<Mydata> v;   
    for (lli i = 0; i < N ; i++) {
        cin >> d[i].y;
        d[i].x = i+1;
    }
    v.push_back(d[0]);
    v.push_back(d[1]);
    Mysize = v.size();

    if (N==2) ans = 1;
    else {
      for (lli i=2; i < N; i++) {
        while(v.size()>=2) {

          Val1 = ((double)v[Mysize-1].y - (double)v[Mysize-2].y)/((double)v[Mysize-1].x - (double)v[Mysize-2].x);
          Val2 = ((double)d[i].y - (double)v[Mysize-1].y)/((double)d[i].x - (double)v[Mysize-1].x);

          if (Val1<= Val2) {
            v.pop_back();
            Mysize--;
          }else break;
        }
        v.push_back(d[i]);
        Mysize++;

        if (ans < (v[Mysize-1].x - v[Mysize-2].x))  ans = v[Mysize-1].x - v[Mysize-2].x;

      }
    }

    v.clear();
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long test;      cin >> test;
    while (test--)      solution();
  return 0;
}
