// https://www.codechef.com/JAN21C/problems/FAIRELCT

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compA(const int a1,const int a2) {
    return a1>a2;
}

bool compB(const int a1,const int a2) {
    return a1<a2;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int no, n2, sum1=0, sum2=0, count_ans = 0, temp;
    
    cin >> no >> n2;
    vector<int> Array1, Array2;
    for(int i = 0; i < no ; i++) {
        cin >> temp;
        Array1.push_back(temp);
        sum1 += Array1[i];
    }
    for(int i = 0; i < n2 ; i++) {
        cin >> temp;
        Array2.push_back(temp);
        sum2 += Array2[i];
    }
    if(sum1 > sum2) {
        cout << 0 << endl;
    } else {
        sort(Array2.begin(), Array2.end(), compA);
        sort(Array1.begin(), Array1.end(), compB);



        int j = 0, i ; 

        for(i = 0; i < no ; i++){
            if (j < n2) {
                sum1 = sum1 + Array2[j] - Array1[i];
                sum2 = sum2 - Array2[j] + Array1[i];
                swap(Array1[i],Array2[j]);
                count_ans++;
                j++;
                if (sum1>sum2) {
                    break;
                }
            } else {
                break;
            }
           
        }
        if (sum1<=sum2) cout << -1 << endl;
        else  cout << count_ans << endl;
        Array1.clear();
        Array2.clear();
    }
  }
  return 0;
}
