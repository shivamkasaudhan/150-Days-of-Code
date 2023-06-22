// 1844. Replace All Digits with Characters
//tc O(n)
//first submit 40% beats
class Solution {
public:
    string replaceDigits(string s) {
        string temp ="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                temp.push_back(s[i]);
            }else{
                char n= s[i-1]+s[i]-'0';
                temp.push_back(n);
            }
        }
        return temp;
        
    }
};
//second submit with some changes according to constraint
//tc O(n)
//100% beats
class Solution {
public:
    string replaceDigits(string s) {
        string temp ="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'){
                temp.push_back(s[i]);
            }else{
                char n= s[i-1]+s[i]-'0';
                temp.push_back(n);
            }
        }
        return temp;
        
    }
};
