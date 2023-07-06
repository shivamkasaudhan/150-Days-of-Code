// 2441. Largest Positive Integer That Exists With Its Negative
//97% beats
// tc O(nlogn)
//code
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        int e= nums.size()-1;
        while(s<e){
            if(nums[s]+nums[e]==0){
                return nums[e];
            }else if(abs(nums[s])<nums[e]){
                e--;
            }else if(abs(nums[s])>nums[e]){
                s++;
            }else{
                s++;
                e--;
            }
        }
        return -1;
    }
};
