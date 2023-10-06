//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
      Node * reverse(Node * root)
    {
        Node* cur=root;
        Node*prev=NULL;
        Node* next;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            
            prev=cur;
            cur=next;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
   
        int i = 0 ;
        Node* firstHead=odd;
        Node *secondHead=odd->next;
        Node* first=odd;
        Node *second=odd->next;
        while(odd!=NULL && first->next!=NULL && second->next!=NULL)
        {
      
        first->next=second->next;
        first=second->next;
        
        second->next=second->next->next;
        second=first->next;
        
           
        }
       first->next=NULL;
      
       
       odd=firstHead;
       while(firstHead->next!=NULL)
       {
           firstHead=firstHead->next;
       }
       firstHead->next=reverse(secondHead);
        //add code here
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends