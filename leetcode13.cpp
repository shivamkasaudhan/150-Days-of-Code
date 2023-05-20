// 2413. Smallest Even Multiple
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans;
        if(n%2!=0){
            ans = n*2;
        }else{
            ans =n;
        }
        return ans;
        
    }
};
// 2154. Keep Multiplying Found Values by Two
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){
            if(nums[i]==original){
                original*=2;
            }
        }
        return original;
    }
};
// 1952. Three Divisors
class Solution {
public:
    bool isThree(int n) {
        int count=0;
        for(int i =1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        return (count ==3);
        
    }
};

