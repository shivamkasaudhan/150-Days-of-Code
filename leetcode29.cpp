// 172. Factorial Trailing Zeroes
class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        while(n>=5){
            ans+=n/5;
            n/=5;
        }
        return ans;
    }
};
// 1. Two Sum
// again with new approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
}; 

