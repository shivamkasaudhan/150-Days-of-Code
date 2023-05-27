// 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=0;
        for(int i=1;i<salary.size()-1;i++){
            sum=sum+salary[i];
        }
        double avg= sum/(salary.size()-2);
        return avg;
        
    }
};
// 217. Contains Duplicate
// tle 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count =0;
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


