// 168. Excel Sheet Column Title
//tc O(log26 n)
//sc O(log26 n)
//code
class Solution {
public:
    string convertToTitle(int cn) {
        string ans="";
        while(cn){
            cn--;
            char temp= 'A'+(cn%26);
            ans=temp+ans;
            cn/=26;
        }
        return ans;
    }
};

