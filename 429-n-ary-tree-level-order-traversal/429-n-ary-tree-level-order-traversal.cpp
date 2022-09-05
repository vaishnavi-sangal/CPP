/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
      //  vector<int>output;
         queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            vector<int>output;
            int size=q.size();
            while(size--)
            {
            Node* k=q.front();
                q.pop();
                output.push_back(k->val);
        
            for(Node* child:k->children)
            {
            
                q.push(child);
            }
            }
            ans.push_back(output);
            
        }
        return ans;
        
    }
};


/*class Solution {
public:
      vector<vector<int>> levelOrder(Node* root) {
         if (root == nullptr) return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while (!q.empty()) {
            vector<int>temp;
            int sz=q.size();
            while(sz--){
                Node* curr = q.front(); q.pop();
                temp.push_back(curr->val);
                for (Node* child : curr->children) {
                    q.push(child);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};*/






