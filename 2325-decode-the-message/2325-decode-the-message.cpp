class Solution {
public:
    string decodeMessage(string s, string p) {
        map<char,char> m;
        int l=97;
        set<char> s1;
        for(auto x:s)
        {
            if(x!=' '&&s1.find(x)==s1.end())
            {
                char c=l;
                m[x]=c;
                s1.insert(x);
                l++;
                
            }
        }
        string f="";
        for(auto x:p)
        {
            if(x==' ')
            {
                f+=" ";
            }
            else
            {
                char c=m[x];
                f+=(c);
            }
            
            
        }
        return f;
        
    }
};