// Weekly Contest 357
//1 out 0f 4
//(i) 6925. Faulty Keyboard
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i'){
                reverse(ans.begin(),ans.end());
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
        
    }
};
