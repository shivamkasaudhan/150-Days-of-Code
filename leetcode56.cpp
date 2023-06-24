
// 1995. Count Special Quadruplets
//tc O(n^4)
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    for(int l=k+1;l<nums.size();l++){
                        if(nums[i]+nums[j]+nums[k]==nums[l]){
                            count++;
                        }
                    }
                    
                }
            }
        }
        return count;
        
    }
};
//1534. Count Good Triplets
//tc O(n^3)
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count =0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j+1;k<arr.size();k++){
                    if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c){
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};