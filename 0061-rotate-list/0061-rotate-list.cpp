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
    ListNode* rotateRight(ListNode* head, int k) {
        int l = 0;
        if(head==NULL) return NULL;
        ListNode* temp = head;
        ListNode* begin;
        //FINDING LENGTH
        while(temp){
            if(!temp->next){
                temp->next = head;
                l++;
                break;
            }
            temp=temp->next;
            l++;
        }

        //Find k%l
        k%=l;
        int count = 0;
        while(temp){
            count++;
            temp=temp->next;
            if(count == l-k){
                begin = temp->next;
                temp->next = NULL;
                return begin;
            }
            
        }
        return begin;
    }
};