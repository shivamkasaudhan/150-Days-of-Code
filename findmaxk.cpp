#include <iostream>
using namespace std;
int findMaxK(int nums[], int n)
{
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            nums[i] = (-1) * nums[i];
        }
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                ans = nums[i];
            }
            else
            {
                ans = -1;
            }
        }
    }
    return ans;
}
int main(){
    int nums[6]= {-1,10,6,7,-7,1};
    cout<<findMaxK(nums,6);
    return 0;
}