// 2678. Number of Senior Citizens
//tc O(n)
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        int age;
        for(auto v: details){
            age= (v[11]-'0')*10+(v[12]-'0');
            if(age>60){
                count++;
            }
        }
        return count; 
    }
};
// 
2733. Neither Minimum nor Maximum
// tc O(nlogn)
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n= nums.size();
        if(n<=2){
            return -1;
        }
        sort(nums.begin(),nums.end());
        return nums[1];
        
    }
};
