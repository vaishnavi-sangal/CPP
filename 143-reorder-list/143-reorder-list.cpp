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
    void reorderList(ListNode* head) {
        ListNode* temp= head;
        vector<int>ans;
        while(temp!=nullptr)
        {
           ans.push_back(temp->val);
            temp=temp->next;
           //  ans.push_back(temp->val);
        }
  //     ans.push_back(temp->val);
        temp=head;
       
        int i=0,j=ans.size()-1;
        vector<int>v;
        int a=0;
        while(i<=j)
        {
            if(a%2==0)
            {
                v.push_back(ans[i]);
                i++;
                a++;
            }
            else
            {
                v.push_back(ans[j]);
                j--;
                a++;
            }
        }
        
        for(auto it:v)
        {
            temp->val=it;
            temp=temp->next;
          //  cout<<it<<" ";
        }
     //   return head;
    }
};