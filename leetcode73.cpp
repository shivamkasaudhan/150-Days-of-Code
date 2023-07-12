// 26. Remove Duplicates from Sorted Array
//tc O(nlogn)
//code
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int n= nums.size();
        return n;
        
    }
};
