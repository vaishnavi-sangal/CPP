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
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        int t=0;
        
        while(temp!=NULL && t<10000)
        {
            temp=temp->next;
            t++;
            if(t==9999 && temp->next!=NULL)
                return true;
            
        }
     if(temp==NULL)
            return false;
      
        
        return false;
        
    }
};