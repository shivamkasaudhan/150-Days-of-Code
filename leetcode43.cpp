// 189. Rotate Array
//tc O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums= temp;
        
    }
};

// 1752. Check if Array Is Sorted and Rotated
//tc O(n)
//100% beats
class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[nums.size()-1]>nums[0]){
            count++;
            }
        return count<=1;
    }
};
//33. Search in Rotated Sorted Array
// tc O(logn)
class Solution {
public:
    int binarysearch(vector<int>& a, int s, int e, int key) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (a[mid] == key) {
                return mid;
            }
            if (a[mid] < key) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }
    
    int getpivot(vector<int>& a, int n) {
        int s = 0;
        int e = n - 1;
        
        while (s < e) {
            int mid = s + (e - s) / 2;
            
            if (a[mid] >= a[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getpivot(nums, n);
        
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return binarysearch(nums, pivot, n - 1, target);
        } else {
            return binarysearch(nums, 0, pivot - 1, target);
        }
    }
};

// 153. Find Minimum in Rotated Sorted Array
//tc O(logn)
class Solution {
public:
    int findMin(vector<int>& nums) {
    int s=0;
    int e=nums.size()-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(nums[mid]>=nums[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    if(nums[0]<nums[s]) return nums[0]; 
    return nums[s];
        
    }
};
