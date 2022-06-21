// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        vector<int> v;
        Node* t = head;
        while(t)
        {
            v.push_back(t->data);
            t=t->next;
        }
        vector<int> f;
        set<int> p;
        int temp=-1;
        for(int i=v.size()-1 ; i>=0 ; i--)
        {
            if(temp<=v[i])
            {
                f.push_back(v[i]);
            }
            temp=max(temp,v[i]);
        }
        reverse(f.begin(),f.end());
        if(f.size()==0)
        {
            return NULL;
        }
        Node *a=new Node(f[0]);
        Node *b = a;
        for(int i=1 ; i<f.size() ; i++)
        {
            Node *c=new Node(f[i]);
            b->next=c;
            b=c;
        }
        
        return a;
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends