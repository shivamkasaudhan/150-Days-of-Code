// 350. Intersection of Two Arrays II
//normal
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        for(int i =0;i<n;i++){
            int element = nums1[i];
            for(int j=0;j<m;j++){
                if(element == nums2[j]){
                    ans.push_back(element);
                    nums2[j]=-1;
                    break;
                }
            }
        }
        return ans;
        
    }
};

