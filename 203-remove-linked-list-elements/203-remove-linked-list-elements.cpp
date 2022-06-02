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
    ListNode* removeElements(ListNode* head, int val) {
     //   ListNode *start=head;
        ListNode *prev=NULL,*temp=head;
        while(temp)
            
        {
           if(val==head->val)
            {
                temp=temp->next;
                head=NULL;
                head=temp;
            } 
         else   if(temp->val==val)
            {
                      
                prev->next=temp->next;
                temp=prev->next;
                
                
            }
            else{
                prev=temp;
            temp=temp->next;
                
            }
        }
        return head;
        
    }
};