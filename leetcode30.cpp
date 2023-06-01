// 2706. Buy Two Chocolates
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int ans=money;
        if(prices[0]+prices[1]<=money){
            ans= money - prices[0] - prices[1];
        }
        return ans;
        
    }
};
// 1385. Find the Distance Value Between Two Arrays
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i,j, ans=0;
        for( i=0;i<arr1.size();i++){
            for(j=0;j<arr2.size();j++){
                int diff =abs(arr1[i]-arr2[j]);
                if(diff<=d){
                    break;
                }
            }
            if(j==arr2.size())
                    ans++;
        }
        return ans;
        
    }
};
// 1346. Check If N and Its Double Exist
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool ans=false;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if((arr[i]==2*arr[j] || 2*arr[i]==arr[j] ) && i!=j){
                    ans=true;
                }
            }
        }
        return ans;
        
    }
};
// 2006. Count Number of Pairs With Absolute Difference K
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                    count++;
                }
            }
        }
        return count;
        
    }
};

// 1920. Build Array from Permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int value= nums[nums[i]];
            ans.push_back(value);
        }
        return ans;
        
    }
};
// 2176. Count Equal and Divisible Pairs in an Array
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count   = 0;
        for(int i=0; i < nums.size(); i++ ){
            for(int j = i+1; j < nums.size(); j++ ){
                if(nums[i]==nums[j] && (i*j)%k == 0){
                    count++;
                }
            }
        }
        return count;
        
    }
};





