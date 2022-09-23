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
    void inorder(vector<int>&a,TreeNode* root)
    {
        if(root==NULL)
            return ;
        
        inorder(a,root->left);
        a.push_back(root->val);
        inorder(a,root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        vector<int>a;
        inorder(a,root);
        for(auto it:a)
        {
            if(it>=low && it<=high)
            {
                ans+=it;
            }
        }
        return ans;
    }
};