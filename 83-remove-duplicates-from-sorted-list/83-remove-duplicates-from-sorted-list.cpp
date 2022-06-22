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
    ListNode* deleteDuplicates(ListNode* head) {
          if(head==NULL ||  head->next==NULL)
        {
              if(head==NULL)
            return NULL;
              else
                  return head;
        }
        ListNode *start=head, *p=head->next;
    /*    set<int>s;
        while(  start!=NULL )
        {
            int d=start->val;
            s.insert(d);
          
                start=start->next;
            
          
        }
     ListNode* ans=NULL;
        for(auto it:s)
        {
         ListNode*   ans=new ListNode(it);
            ans=ans->next;
        }
        return ans;
        */
    
        while(p!=NULL)
        {
            if(p->val==start->val)
            {
                start->next=p->next;
            }
            else
            {
                start=start->next;
            }
            p=p->next;
        }
        return head;
    }
};