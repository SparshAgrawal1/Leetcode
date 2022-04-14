class Solution {
public:
    int largestInteger(int n) {
        vector<pair<int,int>> v1,v2;
        int l=n;
        int k=0;
        vector<pair<int,int>> v;
        while(l>0)
        {
            int h=l%10;
            v.push_back({h,k});
            l=l/10;
            k++;
        }
        
        k--;
        // int k1=k;
       
            for(int i=0 ; i<v.size() ; i++)
            {
                
                    v[i].second=k;
                    k--;
               
            }
           
        for(auto x:v)
        {
            if(x.first%2==0)
            {
                v1.push_back(x);
            }
            else
            {
                v2.push_back(x);
            }
        }
       
        reverse(v.begin(),v.end());
        // for(auto x:v)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        vector<pair<int,int>> k1=v;
            vector<pair<int,int>> k2=v;
        sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());
        int t1=0;
        int j1=v1.size()-1;
        int j2=v2.size()-1;
        for(auto x:v)
        {
            if(x.first%2==0)
            {
                t1=t1*10 + v1[j1].first;
                j1--;
            }
            else
            {
                t1=t1*10 + v2[j2].first;
                j2--;
            }
        }
        
        // int t1=0;
        //     for(auto x:k1)
        //     {
        //         t1=t1*10 + x.first;
        //     }
        // int t2=0;
        //     for(auto x:k2)
        //     {
        //         t2=t2*10 + x.first;
        //     }
        
        return t1;
        
        // ll k1=0;
        // k1=p1[p1.size()-1];
        
        
    }
};