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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp=NULL;
        if(root==NULL)
            return NULL;
      
        if(val<root->val)
        {
           return  searchBST(root->left,val);
            cout<<1;
        }
         if(root->val==val)
        {
            cout<<2;
            temp=root;
            return temp;
        }
     
        
         if(root->val<val)
        {
           return searchBST(root->right,val);
        }
    
        return temp;
    }
};

/*TreeNode* searchBST(TreeNode* root, int val) {
		if(root == NULL)
			return NULL;
    
    if(root->val == val)
        return root;
    
    if(val < root->val)
        return searchBST(root->left,val);
    if(val > root->val)
        return searchBST(root->right,val);
    
    return NULL;
}*/