class Solution {
public:
    void xxxx(string s,string &s1, unordered_set<string> &q,int l,int n,unordered_set<string> &f,string &t)
    {
        if(l==n)
        {
            // cout<<t<<endl;
            // for(auto x:q)
            // {
            //     cout<<x<<endl;
            // }
            if(q.find(s1)!=q.end()&&s1!="")
            {
                t+=s1;
                f.insert(t);
            }
            else if(s1=="")
            {
                f.insert(t);
            }
            return;
        }
        s1+=s[l];
        // cout<<s1<<endl;
        if(q.find(s1)!=q.end())
        {
            // cout<<s1<<endl;
            // s1="";
            string t1=t;
            string s2=s1;
            t+=s1;
            if(l+1!=n)
            {
                t+=" "; 
            }
                
           
            s1="";
                l++;
            xxxx(s,s1,q,l,n,f,t);
            xxxx(s,s2,q,l,n,f,t1);
        }
        else
        {
            // t=s1;
            l++;
            xxxx(s,s1,q,l,n,f,t);
        }
    }
    vector<string> wordBreak(string s, vector<string>& v) {
        unordered_set<string> q;
        for(auto x:v)
        {
            q.insert(x);
        }
        int n=s.length();
        string t="";
        unordered_set<string> f;
        int l=0;
        string s1="";
        xxxx(s,s1,q,l,n,f,t);
        vector<string> f1;
        for(auto x:f)
        {
            f1.push_back(x);
        }
        return f1;
    }
};