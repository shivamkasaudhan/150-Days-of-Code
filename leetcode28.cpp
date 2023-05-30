// 704. Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans = mid;
                break;
            }else if(nums[mid]>target){
                e = mid-1;
            }else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
};
// 1925. Count Square Sum Triples
class Solution {
public:
    int countTriples(int n) {
        int count =0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){

                for(int k=1;k<=n;k++){
                    if(pow(k,2)==pow(i,2)+pow(j,2)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
// 1523. Count Odd Numbers in an Interval Range

class Solution {
public:
    int countOdds(int low, int high) {
        int count =0;
        for(int i=low;i<=high;i++){
            if(i%2!=0){
                count++;
            }
        }
        return count;
        
    }
};
