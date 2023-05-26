// 1025. Divisor Game
class Solution {
public:
    bool divisorGame(int n) {
        return (n%2==0);
    }
};
// 1913. Maximum Product Difference Between Two Pairs
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        return (nums[n-2]*nums[n-1]-nums[0]*nums[1]);
        
    }
};
// 2089. Find Target Indices After Sorting Array
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};
// 977. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size();i++){
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};



