// 258. Add Digits
class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        if(num==0 || num<10){
            ans=num;
        }else{
            ans=1+(num-1)%9;
        }
        return ans; 
    }
};
