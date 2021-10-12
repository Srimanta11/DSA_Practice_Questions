// https://www.codechef.com/FEB21C/problems/MEET

#include <bits/stdc++.h>

using namespace std;

class CTime {
    public:
        int hh;
        int mm;
        char M;
        int total;

    void calT() {
        if (M == 'A' && hh == 12) {
            hh -= 12;
        }
        if (M == 'P' && hh != 12) {
            hh +=12;
        }
        total = hh*60 + mm;
    }
};

class FTime {
    public:
        CTime Arr, Dep;
};

char* subchar(char *str, int pos) {
    char *anschar = new char[2];
    anschar[0] = str[pos];
    anschar[1] = str[pos+1];
    return anschar;
}

void solution() {
    int n;
    char time_str[20];
    CTime chef; 

    cin.getline(time_str, 10);
    chef.M = time_str[6];
    chef.hh = atoi(subchar(time_str, 0));
    chef.mm = atoi(subchar(time_str, 3));
    chef.calT();

    cin >> n;

    int ans[n] = {0}, k = 0;
    FTime friends[n];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin.getline(time_str, 20);

        friends[i].Arr.M = time_str[6];
        friends[i].Arr.hh = atoi(subchar(time_str, 0));
        friends[i].Arr.mm = atoi(subchar(time_str, 3));
        friends[i].Arr.calT();

        friends[i].Dep.M = time_str[15];
        friends[i].Dep.hh = atoi(subchar(time_str, 9));
        friends[i].Dep.mm = atoi(subchar(time_str, 12));
        friends[i].Dep.calT();

        if (chef.total >= friends[i].Arr.total && chef.total <= friends[i].Dep.total)   ++ans[i];

    }

    for (int i = 0; i < n ;i++)     cout << ans[i];
    cout << endl; 
}

int main() {
    ios_base::sync_with_stdio(0);
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        solution();
    }
  return 0;
}
