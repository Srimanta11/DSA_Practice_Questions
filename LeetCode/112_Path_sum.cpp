//Question Link - https://leetcode.com/problems/path-sum/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void checkPathSum(TreeNode *root, int targetSum, int pathSum,bool& ret)
    {
        if(root==NULL)
           return;
        pathSum+=root->val;
        if(root->left==NULL&&root->right==NULL)
        {
            if(targetSum == pathSum)
            {
             ret = true;
             return;
            }
               
        }
        checkPathSum(root->left, targetSum, pathSum, ret);
        checkPathSum(root->right, targetSum, pathSum, ret);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ret=false;
        checkPathSum(root,targetSum,0,ret);
        return ret;
    }
};