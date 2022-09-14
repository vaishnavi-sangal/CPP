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
    string solve(TreeNode* root,unordered_map<string,pair<TreeNode*,int>>&mp){
        if(root==nullptr) return "#";
        string leftTraversal=solve(root->left,mp);
        string rightTraversal=solve(root->right,mp);
        string currentSubtree=to_string(root->val)+" "+leftTraversal+" "+rightTraversal;
        if(mp.count(currentSubtree)>0){
            mp[currentSubtree].second++;
        }
        else mp[currentSubtree]={root,1};
        return currentSubtree;
    }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>duplicates;
        unordered_map<string,pair<TreeNode*,int>>mp;
        solve(root,mp);
        for(auto &t:mp){
            if(t.second.second>1) duplicates.push_back(t.second.first);
        }
        return duplicates;
    }
};