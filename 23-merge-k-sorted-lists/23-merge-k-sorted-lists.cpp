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
class compare{
public:

bool operator()(ListNode* a,ListNode* b){
    return a->val>b->val;
}
};
class Solution {
public:

ListNode* mergeKLists(vector<ListNode*>& lists) {
    //crete min heap with custom data type
    priority_queue<ListNode*,vector<ListNode*>,compare> pq;
    
    int k=lists.size();
    //find no of lists AND THEN push first head node from all the lists in heap
    for(int i=0;i<k;i++){
        //add only when head is not NULL
        if(lists[i]!=NULL){
            pq.push(lists[i]);
        }
        
    }
    ListNode* head=NULL;
    ListNode* tail=NULL;
    while(!pq.empty()){
        //get the minimum Node from heap with val as minimum as per min heap
        ListNode* temp=pq.top();
        pq.pop();
        //when answer list is empty update head and tai;
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        //else add after tail and update the tail
        else{
            tail->next=temp;
            tail=temp;
        }
        //if next element is present for curr node then add it in heap then 
        // it would automatically arranged as per its val in min heap
        if(temp->next){
            pq.push(tail->next);
        }
    }

    //return the head of answer list
    return head;
}
};