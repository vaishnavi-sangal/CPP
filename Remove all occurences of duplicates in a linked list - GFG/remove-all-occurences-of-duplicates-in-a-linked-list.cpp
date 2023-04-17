//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

// } Driver Code Ends
//User function Template for C++

/* Linked List node structure
    
struct Node {
	int data;
	struct Node *next;
};

*/

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here
         if(head==NULL)
        return NULL;
        int flag=0;
    Node* temp=new Node(-1);
        Node* prev=temp;
        Node* curr=head;
        while(curr!=NULL)
        {
            if(curr ->next!=NULL && curr->data==curr->next->data)
            {
                curr=curr->next;
                flag=1;
            }
          else  if(flag==1)
            {
               // temp=temp->next;
               if(curr->next!=NULL && curr->next->next!=NULL && curr->next->data!=curr->next->next->data)
               {
            Node* tempi=new Node(curr->next->data);
               
                temp->next=tempi;
                temp=tempi;
                curr=curr->next;
                 
               }
               
              curr=curr->next;
                flag=0;

            }
            else
            {
               // temp->next=new ListNode(curr->val);
                Node* tempi=new Node(curr->data);
               
                temp->next=tempi;
                temp=tempi;
                curr=curr->next;
            }
         
        }
        return prev->next;
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N;

		cin >> N ;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		head = ob.removeAllDuplicates(head);
		printList(head);

		cout << "\n";


	}
	return 0;
}

// } Driver Code Ends