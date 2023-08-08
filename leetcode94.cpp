// 125. Valid Palindrome
//tc O(n)
//sc O(n)
//code
class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                temp.push_back(tolower(s[i]));
            }
        }
        int i=0;
        int e= temp.size()-1;
        while(i<=e){
            if(temp[i]!=temp[e]){
                return false;
            }
            i++;
            e--;
        }
        return true;
        
    }
};
