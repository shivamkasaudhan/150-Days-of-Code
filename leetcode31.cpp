// 2057. Smallest Index With Equal Value
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i]){
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};
// 1342. Number of Steps to Reduce a Number to Zero
class Solution {
public:
    int numberOfSteps(int num) {
        int count =0;
        while(num>0){
            if(num%2!=0 ){
                num-=1; 
            }else{
                num/=2;
            }
            count++;
        }
        return count;
        
    }
};


