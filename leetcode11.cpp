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