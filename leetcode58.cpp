// 4. Median of Two Sorted Arrays
//tc O(m+n)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i=0;
        int j=0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        while (i < nums1.size()) {
            merged.push_back(nums1[i]);
            i++;
        }
        
        while (j < nums2.size()) {
            merged.push_back(nums2[j]);
            j++;
        }
        int n= merged.size();
        double ans;
        if(n%2==0){
            ans = double(merged[n/2]+merged[(n/2)-1])/2;
        }else{
            ans = merged[n/2];
        }
        return ans;
    }
};
