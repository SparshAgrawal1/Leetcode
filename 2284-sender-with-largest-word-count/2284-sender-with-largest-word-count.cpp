class Solution {
public:
    string largestWordCount(vector<string>& v, vector<string>& s) {
        map<string,int> m;
        int n=v.size();
        for(int i=0 ; i<n ; i++)
        {
            int  ans=0;
            string x=v[i];
            // bool curr=false;
            for(auto y:x)
            {
                if(y==' ')
                {
                    ans++;
                    // curr=true;
                }
            }
            m[s[i]]+=ans+1;
        }
        string s1;
        int temp=INT_MIN;
        for(auto x:m)
        {
            if(x.second>temp)
            {
                temp=x.second;
                s1=x.first;
            }
            else if(x.second==temp)
            {
                int n1=s1.size();
                int n2=x.first.size();
                int n3=min(n1,n2);
                for(int j=0 ; j<n3 ; j++)
                {
                    if(x.first[j]-'0'>s1[j]-'0')
                    {
                        s1=x.first;
                        break;
                    }
                }
            }
        }
        // cout<<m["EMoUs"]<<endl;
        // cout<<m["FnZd"]<<endl;
        return s1;
        
    }
};