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
      if (k == 0)
          return head; 
        if (head ==nullptr)
            return nullptr;
      ListNode* answer = new ListNode(0);
      ListNode* ptr = answer;
        ListNode* headptr = head;
      vector<int> elements;
      int rotate = 0 , size =0 ;
      while (headptr!=nullptr)
      {
          elements.push_back(headptr->val);
          headptr = headptr->next;
      }
      size =elements.size();  
      rotate = (k % size);
        if (rotate ==0)
            return head;
     for (int i=(size-rotate); i<size ;i++)
     {
         ListNode* newOne = new ListNode(elements[i]);
         ptr->next = newOne;
         ptr= ptr->next;
     }
     for (int i= 0 ;i<(size-rotate); i++)
     {
         ListNode* newOne = new ListNode(elements[i]);
         ptr->next = newOne;
         ptr= ptr->next;
     }
        return answer->next;
    
    }
};