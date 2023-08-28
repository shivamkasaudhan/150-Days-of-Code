// 405. Convert a Number to Hexadecimal
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    string toHex(long num) {
        string ans="";
        string digits= "0123456789abcdef";
        if(num==0) return "0";
        if(num<0){
            num =num+4294967296;
        }
        while(num!=0){
            int temp=num%16;
            ans=digits[temp]+ans;
            num/=16;
        }
        return ans;
        
    }
};
