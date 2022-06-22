// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string a)
    {
        // Your code here
        stack<int> s;
        for(int i=0 ; i<a.length() ; i++)
        {
            if(a[i]!='+'&&a[i]!='-'&&a[i]!='*'&&a[i]!='/')
            {
                s.push(a[i]-'0');
            }
            else
            {
                int l=s.top();
                s.pop();
                int h=s.top();
                s.pop();
                if(a[i]=='+')
                {
                    s.push(l+h);
                }
                else if(a[i]=='-')
                {
                    s.push(h-l);
                }
                else if(a[i]=='*')
                {
                    s.push(l*h);
                }
                else if(a[i]=='/')
                {
                    s.push(h/l);
                }
            }
        }
        return s.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends