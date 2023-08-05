// 441. Arranging Coins
//tc O(logn)
//sc O(1)
//100% beats
//code
class Solution {
public:
    int arrangeCoins(int n) {
        int s=0;
        int e= n;
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long sum = (long long)mid*(mid+1)/2;
            if(sum<=n){
                ans=max(mid,ans);
                s=mid+1;
            }else{
                e= mid-1;
            }
        }
        return ans;
    }
};