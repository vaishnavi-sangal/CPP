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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *n1=headA;
        ListNode *n2=headB;
          ListNode *h1=headA;
        ListNode *h2=headB;
        int c1=0,c2=0;
        while(h1!= NULL)
        {
            h1=h1->next;
            c1++;
        }
          while(h2!=NULL)
        {
            h2=h2->next;
            c2++;
        }
        while(c1>c2)
        {
             c1--;
            n1=n1->next;
          //  c1--;
        }
        while(c2>c1)
        {
             c2--;
            n2=n2 -> next;
          //  c2--;
        }
        while(n1!=n2)
        {
           n1=n1->next;
            n2=n2 ->next;
            
        }
      //  cout<<c1<<c2;
        return n1 ;
    }
};