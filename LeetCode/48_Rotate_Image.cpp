//Url:https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int i,j;
        int  N=matrix.size();
        // vector<vector<int>> matrix1(N);
        
        for(i=0;i<N;i++)
        {
            for(j=i+1;j<N;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(i=0;i<N;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
     
    }
};