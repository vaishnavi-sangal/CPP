
class Solution {
public:
    vector<int>v;
    
    vector<int> preorderTraversal(TreeNode* root) {
       // v.push_back(root->val);
        if(root==NULL)
        {
            return v;
        }
        v.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
         
        return v;
        
    }
};