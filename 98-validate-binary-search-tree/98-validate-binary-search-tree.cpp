class Solution {
public:

  
    bool isValidBST(TreeNode* root,long long maxi=LONG_MAX,long long mini=LONG_MIN) {
        if(root==NULL)
        {
            return true;
        }
        if(root->val>=maxi||root->val<=mini)
        {
            return false;
        }
        
        return isValidBST(root->left,root->val,mini)&&(isValidBST(root->right,maxi,root->val));          
        
    }
};
