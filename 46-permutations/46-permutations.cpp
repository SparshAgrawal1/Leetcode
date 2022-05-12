class Solution {
public:
    void xxx(vector<int> a, int l, int r,vector<vector<int>> &f)
{
    // Base case
    if (l == r)
    {
        f.push_back(a);
    }
        // cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            xxx(a, l+1, r,f);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
    vector<vector<int>> permute(vector<int>& v) {
        
        vector<vector<int>> f;
        xxx(v,0,v.size()-1,f);
        return f;
        
    }
};