
//URL:https://leetcode.com/problems/target-sum/

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum<target || (sum+target)%2 != 0 || (sum+target)<0)
        {
            return 0;
        }
        int M=(sum+target)/2;
        int t[n+1][M+1];
        for(int i=0;i<n+1;i++)
        {
            t[i][0]=1;
        }
        for(int j=1;j<M+1;j++)
        {
            t[0][j]=0;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<M+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]]; 
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][M];
    }
};