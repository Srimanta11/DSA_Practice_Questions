// https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <iostream>
using namespace std;


int max_of_four(int w,int x,int y,int z){
    if(w>x && w>y && w>z){
        return w;
    }
    else if(x>w && x>y && x>z){
        return x;
    }
    else if(y>w && y>x && y>z){
        return y;
    }
    else{
        return z;
    }
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}