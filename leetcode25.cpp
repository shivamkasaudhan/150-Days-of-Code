// 136. Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i = 0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
        
    }
};
// 242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t);
        
    }
};

