// 1539. Kth Missing Positive Number
//tc O(logn)
//88% beats
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s=0;
        int e = arr.size();
        while(s<e){
            int mid= s+(e-s)/2;
            if(arr[mid]-(mid+1)<k){
                s= mid+1;
            }else{
                e =mid;
            }
        }
        return s+k;
        
    }
};
