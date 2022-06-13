// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
 //   int c=solve()
   int  solve(Node *head){
    
        Node *start=head;
        if(start->next ==NULL)
        {
            int l=start->data;
            int a=l+1;
            start->data = a%10;
            int c=a/10;
            return c;
        }
        
        
        // Your Code here
        // return head of list after adding one
    
    int css=solve(start->next);
    start->data=start->data + css;
    int l=start->data;
    int c=l/10;
    start->data=l%10;
    return c;
   }
    Node* addOne(Node *head) 
    {
        int x=solve(head);
        if(x)
        {
            Node *nn=new Node(x);
            nn->next=head;
            head=nn;
        }
        return head;
     
        
        // Your Code here
        // return head of list after adding one
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends