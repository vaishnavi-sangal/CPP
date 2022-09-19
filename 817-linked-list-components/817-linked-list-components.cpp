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
    int numComponents(ListNode* head, vector<int>& nums) {
        
        unordered_set<int>s(nums.begin(),nums.end());
        
        ListNode*ptr=head;
        int count=0;
        int res=0;
        while(ptr){
            count=0;
            while(ptr && s.find(ptr->val)!=s.end()){
                count++;
                ptr=ptr->next;
            }
            if(count>0){
                res+=1;
            }
            if(ptr)ptr=ptr->next;
        }
        return res;
    }
};