class Solution {
public:
    bool static sbs(const vector<int> a,const vector<int> b)
 {
     return a[0]<b[0];
 }
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& k) {
        int n=a.size();
    vector<vector<int>> f;
    bool curr=false;
    for(int i=0 ; i<n ; i++)
    {
        if(k[0]<=a[i][1]&&k[0]>=a[i][0])
        {
            if(curr==false)
            {
                curr=true;
                
                int t1=min(k[0],a[i][0]);
                int t2=max(k[1],a[i][1]);
                f.push_back({t1,t2});
            }
            else
            {
                f.push_back(a[i]);
            }
            
        }
        else
        {
            f.push_back(a[i]);
        }
    }
    if(curr==false)
    {
        f.push_back(k);
    }
    // for(auto x:f)
    // {
    //     cout<<x.start<<" "<<x.end<<endl;
    // }
     vector<vector<int>> b=f;
    sort(b.begin(),b.end(),sbs);
    // for(auto x:b)
    // {
    //     cout<<x.start<<" "<<x.end<<endl;
    // }
   int l=-1;
    int h1;
    int h2;
    n=b.size();
    vector<vector<int>> g;
    for(int i=0 ; i<n ; i++)
    {
        if(l==-1)
        {
            l=1;
            h1=b[i][0];
            h2=b[i][1];
        }
        else
        {
            if(b[i][0]<=h2)
            {
                h2=max(h2,b[i][1]);
                h1=min(h1,b[i][0]);
            }
            else
            {
                // Interval temp;
                // temp.start=h1;
                // temp.end=h2;
                g.push_back({h1,h2});
                h1=b[i][0];
                h2=b[i][1];
            }
        }
    }
    // Interval temp;
    //             temp.start=h1;
    //             temp.end=h2;
                g.push_back({h1,h2});
                return g;
    }
};