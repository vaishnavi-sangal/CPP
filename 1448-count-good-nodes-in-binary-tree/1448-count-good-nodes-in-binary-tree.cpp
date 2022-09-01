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
    
    int ans=0;
   
    int helper(TreeNode* root,int maxi)
    {
       
        if(root==NULL)
            return 0;
        if(root->val>=maxi)
        {
            maxi=root->val;
            ans++;
        }
        helper(root->left,maxi);
        helper(root->right,maxi);
        return ans;
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int maxi=INT_MIN;
        return helper(root,maxi);
       // return ans;
        
        
    }
};