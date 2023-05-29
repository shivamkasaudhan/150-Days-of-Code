#include <iostream>
using namespace std;
int binarysrech(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<=e)
    {
        if (a[mid]==key)
        {
            return mid;
            break;
        }
        if (a[mid]<key)
        {
            s=mid+1;
        }else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
    
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,5,10,19,27};
    cout<<binarysrech(even,6,5)<<endl;;
    cout<<binarysrech(odd,5,19);
    return 0;
}
//optimized
int binarysrech(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (a[mid]==key)
        {
            return mid;
            break;
        }
        if (a[mid]<key)
        {
            s=mid+1;
        }else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
    
}
//leetcode optimized from 18%beats to 62%
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s =0;
        int e = nums.size();
        if(target>nums[e-1]){
            return e;
        }
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                e = mid - 1;
            }else {
                s = mid +1;
            }
        }
        return s;
    }
};