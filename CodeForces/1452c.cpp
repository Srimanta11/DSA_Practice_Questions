// https://codeforces.com/contest/1452/problem/C

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

typedef struct {
  vector<char> v;
  int top;
} STACK;

void Initiation(STACK *stack) {
  stack->top = -1;
}

void push(STACK *s, char v) {
    (s->v).push_back(v);
    s->top++;
}

void pop(STACK *s) {
  if(s->top != -1) {
    s->top --;
  }
}

void solution() {
    STACK s1, s2;
    Initiation(&s1);
    Initiation(&s2);
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i< s.length(); i++) {
        if(s[i] == '(') {
            push(&s1, s[i]);
        } else if (s[i] == '[') {
            push(&s2, s[i]);
        } else if (s[i] == ')') {
            if (s1.top != -1) {
                pop(&s1);
                count++;
            }
        } else {
            if (s2.top != -1) {
                pop(&s2);
                count++;
            }
        }
    }
    s1.top = -1;
    s2.top = -1;
    cout << count << endl;
}

int main() {
  int test=1;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}
