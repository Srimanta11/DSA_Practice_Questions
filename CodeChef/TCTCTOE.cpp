// https://www.codechef.com/MAY21B/problems/TCTCTOE

#include <bits/stdc++.h>
using namespace std;

int wining(string board, char ch){
    if ((board[0] == ch)&&(board[0] == board[1])&&(board[0] == board[2])) return 1;
    if ((board[0] == ch)&&(board[0] == board[3])&&(board[0] == board[6])) return 1;
    if ((board[0] == ch)&&(board[0] == board[4])&&(board[0] == board[8])) return 1;
    if ((board[1] == ch)&&(board[1] == board[4])&&(board[1] == board[7])) return 1;
    if ((board[2] == ch)&&(board[2] == board[4])&&(board[2] == board[6])) return 1;
    if ((board[2] == ch)&&(board[2] == board[5])&&(board[2] == board[8])) return 1;
    if ((board[3] == ch)&&(board[3] == board[4])&&(board[3] == board[5])) return 1;
    if ((board[6] == ch)&&(board[6] == board[7])&&(board[6] == board[8])) return 1;
    return 0;
}


int checkCond(string board){
    int countX=0, countO=0;
    for (char ch:board) {
        if (ch == 'X') countX++;
        if (ch == 'O') countO++;
    }

    int count_ = 9 - (countX+countO);
    if (countX < countO)        return 3;
    if (countX > countO+1)      return 3;

    int winX = wining( board, 'X');
    int winO = wining( board, 'O');

    if (winX == 1 && winO == 1)     return 3;
    if (winX == 1 && countX == countO)    return 3;
    if (winO == 1 && countX > countO)       return 3;
    if (winO == 1 || winX == 1)     return 1;
    if (count_ == 0)      return 1;
    return 2;
}

void solution() {
    string board="", temp;
    for (int i=0; i<3; i++) {
        cin >> temp;
        board += temp;
    }
    cout << checkCond(board) << endl;
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

