// 75. Sort Colors
//tc = O(nlogn)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};
//using selection sort 
//tc = O(n^2)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i =0;i<nums.size()-1;i++){
            int minindex=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[minindex]){
                    minindex=j;
                }
            }
            swap(nums[minindex],nums[i]);
        }
        
    }
};
