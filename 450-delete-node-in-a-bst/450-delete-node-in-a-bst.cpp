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
    TreeNode* minValueNode(TreeNode* root){
        while(root->left!=NULL)
            root=root->left;
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        if(root->val==key){
            if(root->left==NULL){
                TreeNode* tmp=root->right;
                delete(root);
                return tmp;
            }
            else if(root->right==NULL){
                TreeNode* tmp=root->left;
                delete(root);
                return tmp;
            }
            else{
                TreeNode* tmp=minValueNode(root->right); 
                root->val=tmp->val;
                root->right=deleteNode(root->right,tmp->val);
                return root;
            }
        }
        else if(root->val>key)
           root->left=deleteNode(root->left,key);
        else
           root->right=deleteNode(root->right,key);
        return root;
    }
};