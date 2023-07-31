// 1470. Shuffle the Array
//tc O(n)
// sc O(1)
//91% beats
//code
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int s=0;
        int e= n;
        while(e<nums.size()){
            ans.push_back(nums[s]);
            ans.push_back(nums[e]);
            s++;
            e++;
        }
        return ans;
        
    }
};
