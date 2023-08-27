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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         if(l1==NULL && l2==NULL)
        {
            return NULL;
        }
        else if(l1==NULL)
        {
            return l2;
        }
        else if(l2==NULL)
        {
            return l1;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        int sum=0,carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            int dig=(l1->val+l2->val)+carry;
            sum=dig%10;
            carry=dig/10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l1=l1->next;
                l2=l2->next;
        }
        while(l1!=NULL)
        {
             int dig=(l1->val)+carry;
            sum=dig%10;
            carry=dig/10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l1=l1->next;
        }
                while(l2!=NULL)
        {
             int dig=(l2->val)+carry;
             sum=dig%10;
            carry=dig/10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l2=l2->next;
        }
        if(carry)
        {
             curr->next=new ListNode(carry);
            
        }
        return dummy->next;
    }
};