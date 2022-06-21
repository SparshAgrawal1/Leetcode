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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *t=head;
        vector<int> v1,v2;
        while(t)
        {
            if(t->data%2==0)
            {
                v1.push_back(t->data);
            }
            else
            {
                v2.push_back(t->data);
            }
            // v.push_back(t->data);
            t=t->next;
        }
        Node *a=head;
        Node *b=head;
        int l=0;
        int h=0;
        while(b)
        {
            if(l==v1.size())
            {
                b->data=v2[h];
                h++;
            }
            else
            {
                b->data=v1[l];
                l++;
            }
            b=b->next;
        }
        return a;
        
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends