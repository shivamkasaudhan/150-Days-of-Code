// 2309. Greatest English Letter in Upper and Lower Case
//tc O(n)
// 100% beats (0ms)
class Solution {
public:
    string greatestLetter(string s) {
        vector<bool> lower(26,false);
        vector<bool> upper(26,false);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                int n = s[i]-'a';
                lower[n]= true;
            }else{
                int m = s[i]-'A';
                upper[m]=true;
            }
        }
        for(int i =25;i>=0;i--){
            if(lower[i]==true && upper[i]==true){
                char ans= i+'A';
                return string(1,ans);
            }
        }
        return "";
    }
};
