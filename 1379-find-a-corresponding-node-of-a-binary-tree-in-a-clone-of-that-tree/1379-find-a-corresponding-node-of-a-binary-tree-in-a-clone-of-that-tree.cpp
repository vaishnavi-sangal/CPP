/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void recurs(TreeNode* root,TreeNode* target,TreeNode* &ans){
        if(root->val==target->val){
           ans=root; 
        }
        if(root->left!=NULL){
            recurs(root->left,target,ans);
        }
        if(root->right!=NULL){
            recurs(root->right,target,ans);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* reference;
        recurs(cloned,target,reference);
        return reference;
    }
};