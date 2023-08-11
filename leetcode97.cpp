// 917. Reverse Only Letters
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    bool isletter(char ch){
        char temp=tolower(ch);
        if(temp>='a' && temp<='z'){
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int e=s.size()-1;
        while(i<e){
            if(isletter(s[i]) && isletter(s[e])){
                swap(s[i],s[e]);
                i++;
                e--;
            }else if(isletter(s[i]) && isletter(s[e])==false){
                e--;
            }else{
                i++;
            }
        }
        return s;
    }
};
