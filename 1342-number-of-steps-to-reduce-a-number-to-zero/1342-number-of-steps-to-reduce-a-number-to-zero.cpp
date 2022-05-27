class Solution {
public:
    int numberOfSteps(int n) {
        int ans=0;
        while(true)
        {
            if(n==0)
            {
                return ans;
            }
            else
            {
                if(n%2==0)
                {
                    ans++;
                    n=n/2;
                }
                else
                {
                    ans++;
                    n--;
                }
            }
        }
        
        
    }
};