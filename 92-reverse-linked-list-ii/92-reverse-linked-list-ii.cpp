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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //ListNode* ans=head;
        if(head==NULL)
        {
            return head;
        }
        else
        {
            ListNode* ans=head;
      //  int count=0;
        vector<int>a;
        while(ans)
        {
           a.push_back(ans->val);
            ans=ans->next;
        }
        reverse(a.begin()+left-1,a.begin()+right);
        ans=head;
        for(auto it:a)
        {
            ans->val=it;
            ans=ans->next;
        }
        return head;
                }
        
        
        
    }
};