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
    bool flag=false;
    int res=0;
    void solve(TreeNode *root, int tgt)
    {
        if(root==NULL) return;                              //Base Condition
        
        res+=root->val;                                     //Incrementing result from each Node
        if(res==tgt and (!root->left and !root->right))     //Current Node is Leaf or not?
        {
            flag=true; return;
        }
        
        solve(root->left, tgt);                              //Recursion
        solve(root->right, tgt);                             //Recursion
        res-=root->val;                                      //Backtrack
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        solve(root, targetSum);
        return flag;
    }
};