class Solution {
public:
   
    int findMinFibonacciNumbers(int k) {
        vector<int> v;
        v.push_back(1);
        v.push_back(1);
        int l=1;
        int h=1;
        while(true)
        {
            int m=l+h;
            if(m<=k)
            {
                v.push_back(m);
                l=h;
                h=m;
            }
            else
            {
                v.push_back(m);
                break;
            }
        }
        // for(auto x:v)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int n=v.size();
        int k1=k;
        // cout<<k1<<endl;
        int curr=0;
        while(k1>0)
        {
            l=0;
            h=n-1;
            int p=-1;
            while(l<=h)
            {
                int m=l+(h-l)/2;
                if(v[m]<=k1)
                {
                    p=v[m];
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
            k1-=p;
            // break;
            curr++;
        }
        


        return curr;
    }
};