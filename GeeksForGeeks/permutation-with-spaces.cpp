//Question Link - https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1#


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
vector<string> result;

    void getEachPermutation(string input, string output)
    {
        if(input.length()==0)
        {
          result.push_back(output);     
          return;
        }
        if(input.length()==1)
        {
            output.push_back(input[0]);
            result.push_back(output);
            return;
        }
        
        string output1 = output + input[0] + " "; 
        string output2 = output + input[0] + "" ;
        
        input.erase(0,1);
        
        getEachPermutation(input,output1);
        getEachPermutation(input,output2);
    }
    vector<string> permutation(string s)
    {
        // Code Here
        string output = "";
        getEachPermutation(s,output);
        sort(result.begin(),result.end());
        return result;
        
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}