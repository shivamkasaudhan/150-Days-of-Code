// 2553. Separate the Digits in an Array
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<10){
                ans.push_back(nums[i]);
            }else{
                while(nums[i]!=0){
                    ans.push_back(nums[i]%10);
                    nums[i]/=10;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
//optimized
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=nums.size()-1;i>=0;i--){
            while(nums[i]!=0){
                ans.push_back(nums[i]%10);
                nums[i]/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};