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
    ListNode* swapPairs(ListNode* head) {
        ListNode* node = new ListNode(-1);
        node->next = head;
        ListNode* prev = node;
        while (prev->next != NULL && prev->next->next != NULL) {
            ListNode* n1 = prev->next;
            ListNode* n2 = prev->next->next;
            ListNode* next = n2->next;
            n1->next = next;
            n2->next = n1;
            prev->next = n2;
            prev = n1;
        }
        return node->next; 
    }
};