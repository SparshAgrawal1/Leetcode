class Solution {
public:
    bool digitCount(string num) {
        map<int,int> m;
        for(auto x:num)
        {
            m[x-'0']++;
        }
        for(int i=0 ; i<num.size() ; i++)
        {
            int l=num[i]-'0';
            if(l!=0)
            {
                if(m[i]!=l)
                {
                    return false;
                }
            }
            else
            {
                if(m.find(i)!=m.end())
                {
                    return false;
                }
            }
            
        }
        return true;
        
    }
};