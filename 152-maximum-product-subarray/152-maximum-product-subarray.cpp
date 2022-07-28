class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        long long temp=a[0];
	    long long a1=a[0];
	    long long a2=a[0];
	    for(int i=1 ; i<n ; i++)
	    {
	       // long long curr=temp*a[i];
	        if(a[i]<0)
	        {
	            swap(a1,a2);
	           // ans=max(ans,curr);
	           // temp=curr;
	        }
	        a1=max((long long)a[i],a[i]*a1);
	        a2=min((long long)a[i],a[i]*a2);
	        temp=max(temp,a1);
	    }
	    return temp;
        
    }
};