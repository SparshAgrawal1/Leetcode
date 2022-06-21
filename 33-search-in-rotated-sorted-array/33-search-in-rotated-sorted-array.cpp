class Solution {
public:
       int x3(vector<int>& v,int l,int h,int t)
       {
        
        while(l<=h)
        {
            int m = l + (h-l)/2;
            if(v[m]==t)
            {
                return m;
            }
            else if(v[m]>v[h])
            {
                l = m+1;
            }
            else h = m-1;
        }
        return -1;
    }
    int x1(vector<int> v,int l,int h,int t)
    {
        while(l<=h)
        {
            int k=(l+(h-l)/2);
            if(v[k]==t)
            {
                return k;
            }
            else if(v[k]>t)
            {
                h=k-1;
            }
            else
            {
                l=k+1;
            }
        }
        return -1;
        
    }
    int x2(vector<int> v,int l,int h,int t)
    {
        while(l<=h)
        {
            int k=(l+(h-l)/2);
            if(v[k]==t)
            {
                return k;
            }
            else if(v[k]>t)
            {
                h=k-1;
            }
            else
            {
                l=k+1;
            }
        }
        return -1;
        
    }
    int search(vector<int>& v, int t) {
        int x = *min_element(v.begin(),v.end());
        int p=x3(v,0,v.size()-1,x);
        int l1=x1(v,0,p-1,t);
        int l2=x2(v,p,v.size()-1,t);
        if(l1!=-1)return l1;
        else
        {
            if(l2!=-1)return l2;
            return -1;
        }
        
        
        
    }
};