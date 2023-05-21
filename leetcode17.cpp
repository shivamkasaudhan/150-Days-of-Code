// 1929. Concatenation of Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
// 1512. Number of Good Pairs
//100% beats
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i = 0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && i<j){
                    count++;
                }
            }
        }
        return count;
        
    }
};
// 1365. How Many Numbers Are Smaller Than the Current Number
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int count =0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
        
    }
};
