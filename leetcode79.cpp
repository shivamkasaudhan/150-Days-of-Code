// 2455. Average Value of Even Numbers That Are Divisible by Three
//tc O(n)
//code
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6==0){
                count++;
                sum+=nums[i];
            }
        }
        if(count==0){
            return 0;
        }else{
            return sum/count;
        }
    }
};
