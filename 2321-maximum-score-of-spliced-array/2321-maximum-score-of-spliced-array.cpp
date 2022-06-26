class Solution {
public:
    int maximumsSplicedArray(vector<int>& v1, vector<int>& v2) {
        vector<int> p1,p2;
        int n=v1.size();
        for(int i=0 ; i<n ; i++)
        {
            p1.push_back(v2[i]-v1[i]);
            p2.push_back(v1[i]-v2[i]);
        }
        int a1=0;
        int a2=0;
        for(auto x:v1)
        {
            a1+=x;
        }
        for(auto x:v2)
        {
            a2+=x;
        }
        int a=max(a1,a2);
        int s1=0;
        int t1=INT_MIN;
        // for(auto x:p1)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(auto x:p2)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        for(int i=0 ; i<n ; i++)
        {
            s1=s1+p1[i];
            t1=max(t1,s1);
            if(s1<0)
            {
                s1=0;
            }
        }
        int s2=0;
        int t2=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
           s2=s2+p2[i];
           t2=max(t2,s2);
            if(s2<0)
            {
                s2=0;
            }
        }
        // cout<<t1<<" "<<t2<<endl;
        a=max(a,a1+t1);
        a=max(a,a2+t2);
        return a;
    }
};