class Solution {
public:
    string minimizeResult(string s) {
        string f="";
        vector<string> v;
        for(auto x:s)
        {
            if(x=='+')
            {
                v.push_back(f);
                f="";
            }
            else
            {
                f+=x;
            }
            
        }
        v.push_back(f);
        // vector<int> v1,v2,p1,p2;
        // int l=0;
        // for(int i=0 ; i<v[0].length() ; i++)
        // {
        //      int j=v[0][i]-'0';
        //     l=l*10+j;
        //     v1.push_back(l);
        // }
        // l=0;
        // for(int i=0 ; i<v[1].length() ; i++)
        // {
        //      int j=v[1][i]-'0';
        //     l=l*10+j;
        //     p1.push_back(j);
        // }
        // for(auto x:v1)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int t1=-1;
        int t2=-1;
        long long ans=INT_MAX;
        string s1=v[0];
        string s2=v[1];
        // cout<<s1<<" "<<s2<<endl;return "";
        for(int i=0 ; i<s1.length() ; i++)
        {
            long long l1=0;
            for(int j=0 ; j<i ; j++)
            {
                l1=l1*10*1LL + (s1[j]-'0');
            }
            if(l1==0)
            {
                l1=1;
            }
            long long l2=0;
            for(int j=i ; j<s1.length() ; j++)
            {
                l2=l2*10*1LL + (s1[j]-'0');
            }
            
            for(int j=0 ; j<s2.length() ; j++)
            {
                long long l3=0;
                long long l4=0;
                for(int k=0 ; k<=j ; k++)
                {
                    l3=l3*10*1LL + (s2[k]-'0');
                }
                for(int k=j+1 ; k<s2.length() ; k++)
                {
                    l4=l4*10*1LL + (s2[k]-'0');
                }
                if(l4==0)
                {
                    l4=1;
                }
                if(ans>=(l2+l3)*l1*l4)
                {
                    ans=(l2+l3)*l1*l4;
                    // cout<<ans<<endl;
                    t1=i;
                    t2=j;
                }
            }
        }
        f="";
        for(int i=0 ; i<s1.length() ; i++)
        {
            if(i==t1)
            {
                f+='(';
            }
            f+=s1[i];
        }
        f+='+';
        
        for(int i=0 ; i<s2.length() ; i++)
        {
           
            f+=s2[i];
             if(i==t2)
            {
                f+=')';
            }
        }
        cout<<ans<<endl;
        return f;
        
    }
};