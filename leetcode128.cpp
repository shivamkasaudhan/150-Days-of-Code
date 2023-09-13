// 8. String to Integer (atoi)
//tc O(n)
//sc O(n)
//code

class Solution {
public:
    bool digit(char s){
        if(s>='0'|| s<='9'){
            return true;
        }
        return false;
    }
    int myAtoi(string s) {
        if(s.length()==0) return 0;
        int i=0;
        while(i<s.size() && s[i] == ' '){
            i++;
        }
        s= s.substr(i);
        int sign=+1;
        int ans=0;
        if(s[i]=='-') sign = -1;
        i= (s[i]=='+' || s[i] == '-') ? 1: 0;
        while(i<s.length()){
            if(s[i]==' ' || !digit(s[i])) break;
            ans= ans*10+s[i]- '0';
            if(sign ==-1 && -1*ans< MIN) return MIN;
            if(sign ==1 && -1*ans>MAX) return MAX;
            i++;


        }
        return (int)(sign*ans);
        
    }
};