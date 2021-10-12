// https://www.codechef.com/JAN21C/problems/DIVTHREE

#include <iostream>

int main() {
  int t;
  std::cin >> t;

  for (int i =0 ; i < t ; i++) {
    long n, k, d, ans = 0, temp;
    std::cin >> n >> k >> d;
    for (long j = 0; j < n ; j++) {
        std::cin >> temp;
        ans += temp;
    }
    ans = ans/k;
    std::cout << (ans<d?ans:d)<< std::endl;
  }
  return 0;
}
