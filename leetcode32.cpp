// 2535. Difference Between Element Sum and Digit Sum of an Array
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        int sum_digit=0;
        for(int i=0;i<n;i++){
            sum +=nums[i];
            while(nums[i]>0){
                sum_digit+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(sum-sum_digit);
        
    }
};
// 1688. Count of Matches in Tournament
class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
    }
};
// 2549. Count Distinct Numbers on Board

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1)return n;
        return n-1;
        
    }
};

