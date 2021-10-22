// https://www.codechef.com/problems/FCTRL2/
#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

using namespace std;
int main()
{
    int t,i,a;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a;
        cpp_int fact;
        fact=1;
        for(int j=1;j<=a;j++){
            fact*=j;
        }
        cout<<fact<<endl;

    }
    return 0;
}