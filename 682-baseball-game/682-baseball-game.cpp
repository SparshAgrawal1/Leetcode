class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<string> s;
        for(auto x:v)
        {
            if(x=="D")
            {
                int l=stoi(s.top());
                l=l*2;
                s.push(to_string(l));
            }
            else if(x=="+")
            {
                int l=stoi(s.top());
                s.pop();
                int h=stoi(s.top());
                s.push(to_string(l));
                l=l+h;
                s.push(to_string(l));
            }
            else if(x=="C")
            {
                s.pop();
            }
            else
            {
                s.push(x);
            }
        }
        int ans=0;
        while(s.empty()==false)
        {
            ans+=stoi(s.top());s.pop();
        }
        return ans;
        
    }
};