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
    vector<int> v;
    void preorder(TreeNode* root)
    {
        if(!root)
            return ;
        v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
   
 
    
    TreeNode* tree(vector<int> v)
    {
        if(v.size()==0)
            return NULL;
        TreeNode* r=new TreeNode(v[0]);
        TreeNode* temp=r;
        for(int i=1;i<v.size();i++){
            temp->left=NULL;
            temp->right=new TreeNode(v[i]);
            temp=temp->right;}
        return r ;
    }
    
    
    void flatten(TreeNode* root) {
        if(root==NULL){
            return ;
        }
        //vector preorder transveral
         preorder(root);
        //make a new tree using vector
        TreeNode* r= tree(v);
        root->right=r->right;
        root->left=NULL;
        
    }
};