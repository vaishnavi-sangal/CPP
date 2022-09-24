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
       vector<vector<int>>ans;
    vector<int>v;
    //vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        void dfs(TreeNode* root,int current,int targetSum)
        {
            if(root==NULL)
                return;
            
            
            current+=root->val;
            v.push_back(root->val);
            
            if(current==targetSum && root->left==NULL && root->right==NULL)
                ans.push_back(v);
            
            
            dfs(root->left,current,targetSum);
            dfs(root->right,current,targetSum);
            
            v.pop_back();
        }
       vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
  
        if(root==NULL)
            return ans;
        dfs(root,0,targetSum);
           return ans;
        
        
        
    }
};