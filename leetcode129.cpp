// 34. Find First and Last Position of Element in Sorted Array
//tc O(logn)
//sc O(1)
//code
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        int s=0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s + (e - s)/2;
            if(target==nums[mid]){
                ans[0]=mid;
                e= mid-1;
            }else if(target<nums[mid]){
                e= mid -1;
            }else{
                s= mid+1;
            }
        }
        s=0;
        e = nums.size()-1;
        while(s<=e){
            int mid = s + (e - s)/2;
            if(target==nums[mid]){
                ans[1]=mid;
                s= mid+1;
            }else if(target<nums[mid]){
                e= mid -1;
            }else{
                s= mid+1;
            }
        }
        return ans;
        
    }
};