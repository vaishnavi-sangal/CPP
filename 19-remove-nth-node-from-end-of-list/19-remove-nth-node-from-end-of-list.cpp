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
ListNode* removeNthFromEnd(ListNode* head, int n) {
if(head==NULL)
{
return NULL;
}
vector<int>v;
ListNode* curr=head;
int c=0;
while(curr!=NULL)
{
c++;
v.push_back(curr->val);
curr=curr->next;
}
int d=c-n;
v.erase(v.begin()+d);
ListNode* dummy=new ListNode();
ListNode* temp=new ListNode();
temp=dummy;
for(int i=0;i<v.size();i++)
{
ListNode* newa =new ListNode(v[i]);
temp->next=newa;
temp=temp->next;
}
return dummy->next;
}
};