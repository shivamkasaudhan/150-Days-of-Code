// 459. Repeated Substring Pattern
//tc O(n)
//sc O(n)
//code
//used KMP Algorithm
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n= s.length();
        vector<int> lps(n,0);
        for(int i=1;i<n;i++){
            int j= lps[i-1];
            while(j>0 && s[i]!=s[j]){
                j=lps[j-1];
            }
            if(s[i]==s[j]){
                ++j;
            }
            lps[i]=j;
        }
        int l = lps[n-1];
        return (l!=0) && (l%(n-l)==0);
        
    }
};
