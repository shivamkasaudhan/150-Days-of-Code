// 2529. Maximum Count of Positive Integer and Negative Integer
//brute force 
//74% beats
//tc O(n)
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)a++;
            if(nums[i]<0)b++;
        }
        return max(a,b);
        
    }
};

