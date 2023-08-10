// 448. Find All Numbers Disappeared in an Array
//tc O(n)
//sc O(n)
//code
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(n,0);
        for(int i=0;i<n;i++){
            temp[nums[i]-1]++;
        }
        vector<int> ans;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;   
    }
};
