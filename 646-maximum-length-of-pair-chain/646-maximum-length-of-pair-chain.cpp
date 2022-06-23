bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
    {
        return (a.second < b.second);
    }
class Solution {
     
public:
   
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<pair<int,int>> v;
        for(int i=0 ; i<pairs.size() ; i++)
        {
            v.push_back({pairs[i][0],pairs[i][1]});
        }
        sort(v.begin(),v.end(),sortbysec);
        int ans=1;
        int l=v[0].second;
        for(int i=1 ; i<v.size() ; i++)
        {
            if(v[i].first>l)
            {
                ans++;
                l=v[i].second;
            }
        }
        return ans;
        
    }
};