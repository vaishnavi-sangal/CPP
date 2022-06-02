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
    int lenj(ListNode* head)
    {
        int c=0;
        while(head!=NULL)
        {
         c++;
            head=head->next;
        }
        return c;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int len=lenj(head);
        int ans=len/2;
        ListNode *cur=head;
        while(ans--)
        {
            cur=cur->next;
        }
        return cur;
        
    }
};