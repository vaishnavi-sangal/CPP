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
    ListNode* oddEvenList(ListNode* head) {
         ListNode* temp=head;
    vector<int>ans1,ans2;
    int a=1;
    while(temp!=NULL)
    {
        if(a%2==0)
        {
    
       ans1.push_back(temp->val);
        }
       else
       {
       ans2.push_back(temp->val);
       }
       temp=temp->next;
       a++;
    }
    ListNode* dummy=new ListNode();
   ListNode* j=new ListNode();
    j=dummy;
    
  //  int a=0;
    for(auto it:ans2)
    {
        ListNode* awa =new ListNode();
        awa->val=it;
        j->next=awa;
//temp->next=newa;
//temp=temp->next;
     //   j->data=it;
       // ans2= ans2->next;
        j=j->next;
         
    }
    for(auto it:ans1)
    {
         ListNode* awa =new ListNode();
        awa->val=it;
        j->next=awa;
       // j->data=it;
      //  ans1=ans1->next;
        j=j->next;
         
    }
    return dummy->next;
        
    }
};