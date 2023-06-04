// 217. Contains Duplicate
//tle
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                    break;
                }
            }
        }
        return (count!=0);
    }
};
// 349. Intersection of Two Arrays
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        for(int i =0;i<n;i++){
            int element = nums1[i];
            for(int j=0;j<m;j++){
                if(element == nums2[j]){
                    ans.push_back(element);
                    nums2[j]=INT_MIN;
                    break;
                }
            }
        }
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
// 414. Third Maximum Number
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ans;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()<=2){
            ans=nums[nums.size()-1];
        }else{
            ans= nums[nums.size()-3];
        }
        return ans; 
    }
};




