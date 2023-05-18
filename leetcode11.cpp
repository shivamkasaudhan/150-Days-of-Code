// 287. Find the Duplicate Number
//brute force
//for vs code
#include <iostream>
using namespace std;
int main(){
    int a[5]= {1,2,2,3,4};
    for (int  i = 0; i <5; i++)
    {
        for (int j = i+1; j <5; j++)
        {
            if (a[i]==a[j])
            {
                cout<<a[i];
            }
        }
    }
    
    return 0;
}
//for leetcode
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    ans= nums[i];
                }
            }
        }
        return ans;
    }
};
//time limit exceeded on this


// 2520. Count the Digits That Divide a Number
class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int ans=0;
        while(n){
            int rem=n%10;
            n/=10;
            if(num%rem==0)ans++;
        }
        return ans;
    }
};
// 1464. Maximum Product of Two Elements in an Array
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        return (nums[n-1]-1)*(nums[n-2]-1);
        
    }
};
