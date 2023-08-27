/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL)
            return NULL;
        if(head->next==NULL)
            return NULL;
            
ListNode* ans=new ListNode(-1);
        ListNode* slow=head;
        ListNode* fast=head;
        
      do  {
          if(slow->next!=NULL)
            slow=slow->next;
          if(fast->next == NULL ||  fast->next->next==NULL)
              return NULL;
            fast=fast->next->next;
          
          
        }
                while(slow!=fast);
        
  
        
        cout<<slow->val<<fast->val;
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
  
        return slow;
    }
};