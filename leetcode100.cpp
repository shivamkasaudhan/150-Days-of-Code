// 215. Kth Largest Element in an Array
//tc O(nlogn)
//sc O(1)
//97% beats
//code
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-k]);
    }
};
