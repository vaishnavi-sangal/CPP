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

TreeNode* func(vector<int>& inorder,int i1,int j1,vector<int>& preorder,int i2,int j2,map<int,int> &m)
{
    if(i1>j1 || i2>j2)return NULL;
    TreeNode *node=new TreeNode(preorder[i2]);
    
    int ind=m[preorder[i2]];
    int numofele=ind-i1;
    
    node->left=func(inorder,i1,ind-1,preorder,i2+1,i2+numofele,m);
    node->right=func(inorder,ind+1,j1,preorder,i2+numofele+1,j2,m);
    
    return node;
}


TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
{
    map<int,int>m;
    for(int i=0;i<inorder.size();i++)m[inorder[i]] = i;
    
    return func(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,m);
}
};