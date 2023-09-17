// 100031. Sum of Values at Indices With K Set Bits
//tc O(nlogn)
//sc O(1)
//code
class Solution {
public:
    int countBits(int n){
        int count=0;
        while(n>0){
            count+=n%2;
            n/=2;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum =0;
        for(int i = 0; i < nums.size(); i++){
            if(countBits(i)==k){
                sum+=nums[i];
            }
        }
        return sum;
        
    }
};
// 100040. Happy Students
//tc O(n)
//sc O(1)
//code (not accepted)
class Solution {
public:
    int countWays(vector<int>& nums) {
        int n = nums.size();
        int minValue = 0;
        int maxValue = n;
        for(int i = 0; i<n; i++){
            minValue = max(minValue, nums[i]+1);
            maxValue = min(maxValue, nums[i]-1);
            
            if( minValue>maxValue) {
                return 0;
            }
        }
        return maxValue - minValue + 1;
        
    }
};