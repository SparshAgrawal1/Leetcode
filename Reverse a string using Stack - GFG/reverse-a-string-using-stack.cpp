// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends


//return the address of the string
char* reverse(char *s, int n)
{
    stack<char> q;
    for(int i=0 ; i<n ; i++)
    {
        q.push(s[i]);
    }
    char *p = new char[n];
    int i=0;
    while(!q.empty())
    {
        p[i++]=q.top();
        q.pop();
    }
    return p;
}