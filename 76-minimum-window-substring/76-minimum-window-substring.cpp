class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length())
        {
            return "";
        }
        map<char,int> m;
        for(auto x:t)
        {
            m[x]++;
        }
        int k=m.size();
        int i=0;
        int j=0;
        int n=s.length();
        int f1=0;
        int f2=0;
        int f=INT_MAX;
        while(j<n)
        {
            m[s[j]]--;
            if(m[s[j]]==0)
            {
                k--;
            }
            if(k==0)
            {
                while(k==0)
                {
                    if(f>(j-i+1))
                    {
                        f=j-i+1;
                        f1=i;
                        f2=j;
                    }
                    m[s[i]]++;
                    if(m[s[i]]==1)
                    {
                        k++;
                    }
                    i++;
                    
                }
            }
            j++;
        }
        if(f==INT_MAX)
        {
            return "";
        }
        
        // cout<<f1<<" "<<f2<<endl;
            string q="";
            for(int i=f1; i <=f2 ; i++)
            {
                q+=s[i];
            }
            return q;
        
        
    }
};