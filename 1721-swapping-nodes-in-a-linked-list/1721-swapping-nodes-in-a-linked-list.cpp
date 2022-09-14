/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        vector<int>ans;
        
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int a=ans.size()-k;
        for(int i=0;i<ans.size();i++)
        {
            if(i==(k-1))
            {
                swap(ans[i],ans[a]);
                break;
            }
        }
        for(auto it:ans)
        {
            temp->val=it;
            temp=temp->next;
        }
        return head;
        
    }
};