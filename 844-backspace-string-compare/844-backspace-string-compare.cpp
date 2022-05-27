class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> q;
        int n=s.length();
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]!='#')
            {
                q.push(s[i]);
            }
            else
            {
                if(q.empty()==false)
                {
                    q.pop();
                }
            }
        }
        string s1;
        while(q.empty()==false)
        {
            s1+=q.top();
            q.pop();
        }
        reverse(s1.begin(),s1.end());
        
        int m=t.length();
        for(int i=0 ; i<m ; i++)
        {
            if(t[i]!='#')
            {
                q.push(t[i]);
            }
            else
            {
                if(q.empty()==false)
                {
                    q.pop();
                }
                
            }
        }
        string s2;
        while(q.empty()==false)
        {
            s2+=q.top();
            q.pop();
        }
        reverse(s2.begin(),s2.end());
        return s1==s2;
        
    }
};