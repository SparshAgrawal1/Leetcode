class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s1="";
        bool temp=false;
        for(int i=0 ; i<word.length() ; i++)
        {
            s1+=word[i];
            if(word[i]==ch&&temp==false)
            {
                temp=true;
                reverse(s1.begin(),s1.end());
            }
            
        }
        return s1;
        
    }
};