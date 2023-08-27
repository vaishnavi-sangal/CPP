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
             if(head==NULL || head->next==NULL)
            return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        
        ListNode* nodebefore=dummy;
          ListNode* curr=head;
        for(int i=1;i<left;i++)
        {
            nodebefore=curr;
            curr=curr->next;
        }
        ListNode* wp=nodebefore->next;
        
        while(left<right)
        {
            ListNode* nodeextract=wp->next;
            if(nodeextract!=NULL){
            wp->next=nodeextract->next;
           
          nodeextract->next=  nodebefore->next;
            nodebefore->next=nodeextract;
            }
            left++;
    
        }
        return dummy->next;
        
    }
};