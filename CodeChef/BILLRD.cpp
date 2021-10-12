// https://www.codechef.com/JAN21C/problems/BILLRD

#include <iostream>

using namespace std;

struct p {
    long x;
    long y;
};

int main() {
  int t;        cin >> t;
  
  for(int i=0; i < t; i++) {
    long N, K, d;
    p ip, op, pp[4];
    cin >> N >> K >> ip.x >> ip.y;
    K--;
    d = abs(ip.y - ip.x);

    if(ip.x == ip.y) {
        op.x = op.y = N;
    } else if(ip.x < ip.y) {
        pp[1].x = N;
        pp[1].y = N-d;
        pp[0].x = N-d;
        pp[0].y = N;
        pp[3].x = 0;
        pp[3].y = d;
        pp[2].x = d;
        pp[2].y = 0;
        op.x = pp[K%4].x;
        op.y = pp[K%4].y;  
        
    } else {
        pp[0].x = N;
        pp[0].y = N-d;
        pp[1].x = N-d;
        pp[1].y = N;
        pp[2].x = 0;
        pp[2].y = d;
        pp[3].x = d;
        pp[3].y = 0;
        op.x = pp[K%4].x;
        op.y = pp[K%4].y;
    }

    cout << op.x << " " << op.y << endl;
  }
  return 0;
}
