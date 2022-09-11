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
    ListNode* reverseList(ListNode* head) {
       vector<int>v;
        ListNode* ptr=head;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        reverse(v.begin(),v.end());
        ListNode* tree=ptr;
        for(auto it:v)
        {   
            tree->val=it;
        
            tree=tree->next;
        }
        return ptr;
    }
};