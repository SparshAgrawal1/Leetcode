class Solution {
public:
    int minElements(vector<int>& v, int t1, int t2) {
        long long l=0;
        for(auto x:v)
        {
            l+=x;
        }
        if(l==t2)
        {
            // cout<<0<<endl;
            return 0;
        }
        long long k;
        if(l>t2)
        {
            long long h=l-t2;
            k=h/t1;
            if(h%t1!=0)
            {
                k++;
            }
            // cout<<k<<endl;
        }
        else
        {
            long long h=t2-l;
            k=h/t1;
            if(h%t1!=0)
            {
                k++;
            }
            // cout<<k<<endl;
        }
        return k;
        
    }
};