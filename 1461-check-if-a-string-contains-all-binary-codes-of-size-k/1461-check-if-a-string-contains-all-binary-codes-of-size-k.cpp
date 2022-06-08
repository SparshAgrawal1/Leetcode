class Solution {
public:
    void xxxx(string s, string &f, int l,int k, bool &temp)
    {
        if(l==k)
        {
            if(s.find(f)==-1)
            {
                temp=true;
            }
            return;
        }
            f[l]='1';
            xxxx(s,f,l+1,k,temp);
            f[l]='0';
            xxxx(s,f,l+1,k,temp);
        
    }
    bool hasAllCodes(string s, int k) {
        
        if(s.size()<k)
        {
            return false;
        }
        unordered_set<string> q;
        string p="";
        for(int i=0 ; i<k ; i++)
        {
            p+=s[i];
        }
        q.insert(p);
        for(int i=k ; i<s.size() ; i++)
        {
            p+=s[i];
            p=p.substr(1,k);
            q.insert(p);
        }
        if(q.size()==powl(2,k))
        {
            return true;
        }
        return false;
        // string f="";
        // for(int i=0 ; i<k ; i++)
        // {
        //     f+='0';
        // }
        // bool temp=false;
        // xxxx(s,f,0,k,temp);
        // if(temp==false)
        // {
        //     return true;
        // }
        // return false;
    }
};