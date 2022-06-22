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
     int rem_count(ListNode* head)
    {
        ListNode* curr = head;
        
        int count = 0;
        
        while(curr)
        {
            count++;
            
            curr = curr -> next;
        }
        
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL)
        {
            return NULL;
        }
         
        int rem_node = rem_count(head);
        
        // if no of remaining is less than k then don't reverse
        
        if(rem_node < k)
            return head;
        
        // count keep track of no of reverse node
        ListNode *prev=NULL;
            ListNode *curr=head;
        ListNode *nexti=NULL;
        int count=0;
        while(curr !=NULL && count<k)
        {
            nexti=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexti;
            count++;
        }
        if(nexti !=NULL)
        {
            head->next=reverseKGroup(nexti,k) ;
        }
        return prev;
        
    }
};