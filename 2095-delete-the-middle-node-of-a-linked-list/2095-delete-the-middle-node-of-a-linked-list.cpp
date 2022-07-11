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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=NULL;
        temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        if(c==1)
        {
            return NULL;
        }
    //    cout<<c;
        ListNode* pp=head;
        c=c/2-1;
      while(c-- && pp!=NULL && pp->next!=NULL)
      {
          pp = pp->next;
   //       cout<<pp->val;
          
          
      }
        if(pp->next!=NULL)
        {
        pp->next=pp->next->next;
        }
     //   cout<<pp->val;
       // cout<<pp->val;
        
      //  delete(pp->next);
       // cout<< pp->val;
        return head;
      
    }
};