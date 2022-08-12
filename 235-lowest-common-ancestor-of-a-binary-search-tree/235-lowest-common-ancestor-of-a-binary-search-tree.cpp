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
	TreeNode* lowestCommonAncestor(TreeNode* s, TreeNode* p, TreeNode* q) {
		if(s==NULL || s==p || s==q)
		{
			return s;
		}

		TreeNode *a=lowestCommonAncestor(s->left,p,q);
		TreeNode *b=lowestCommonAncestor(s->right,p,q);

		if(a!=NULL && b!=NULL) return s;
		if(a==NULL) return b;
		return a;
	}
};