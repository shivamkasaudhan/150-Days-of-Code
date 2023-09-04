// 137. Single Number II
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        int sum, mask;
        for(int i=0;i<32;i++){
            mask=1<<i;
            sum=0;
            for(int n:nums){
                if((n&mask)!=0) sum++;
            }
            if(sum%3!=0) res|=mask;
        }
        return res;
    }
};

