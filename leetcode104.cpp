// 2540. Minimum Common Value
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size()-1;
        int m= nums2.size()-1;
        while(i<=n && j<=m){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }else if(nums1[i]<nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        return -1;
    }
};