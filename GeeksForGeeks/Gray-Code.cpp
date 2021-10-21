
//Question Link - https://practice.geeksforgeeks.org/problems/gray-code-1611215248/1/?category[]=Recursion&category[]=Recursion&difficulty[]=1&page=1&query=category[]Recursiondifficulty[]1page1category[]Recursion#


#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<string> graycode(int n)
    {
        vector<string> ans;
        if(n>=1){
            ans.push_back("0");
            ans.push_back("1");
        }
        for(int i=1;i<n;i++){
            int size=ans.size();
            for(int j=size-1;j>=0;j--){
                ans.push_back("1"+ans[j]);
            }
            for(int j=0;j<size;j++){
                ans[j]="0"+ans[j];
            }
        }
        return ans;
    }
};

    
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> ans;
        Solution obj;
        ans = obj.graycode(n);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout << endl;
    }
}