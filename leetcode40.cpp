// 268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        int e=nums.size();
        int mid = s+(e-s)/2;
        sort(nums.begin(),nums.end());
        while(s<e){
            if(nums[mid]==mid){
                s= mid+1;
            }else{
                e = mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
};
