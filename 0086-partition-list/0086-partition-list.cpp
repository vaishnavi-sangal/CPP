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
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp = head;
            vector<int> small, big;
            while (temp)
            {
                if (temp->val < x) small.push_back(temp->val);
                else big.push_back(temp->val);
                temp = temp->next;
            }
            ListNode *res = head;
            for (auto it: small)
            {
                res->val = it;
                res = res->next;
            }
            for (auto it: big)
            {
                res->val = it;
                res = res->next;
            }
            return head;
        
    }
};