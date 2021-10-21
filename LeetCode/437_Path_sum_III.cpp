//Question Link - https://leetcode.com/problems/path-sum-iii/

class Solution {
public:
    int c=0;
    void solve(TreeNode* root,int k,int sum)
    {
        if(root)
        {
            sum+=root->val;
            if(sum==k)
            {
                c++;
            }
            solve(root->left,k,sum);
            solve(root->right,k,sum);
        }
    }
    void checkNode(TreeNode* root,int k,int sum)
    {
        if(root)
        {
            checkNode(root->left,k,sum);
            checkNode(root->right,k,sum);
            solve(root,k,sum);
        }
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        
        checkNode(root,targetSum,0);
        return c;
    }
};