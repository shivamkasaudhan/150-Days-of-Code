// 2141. Maximum Running Time of N Computers
//tc O(nlogm) m is sum of all ele of b
//sc O(1)
//completed 100 Days of code challenge 
//code
class Solution {
public:
    bool possible(vector<int>& b,long long mid, int n){
        long long totaltime=0;
        for(long long btime : b){
            if(btime<mid){
                totaltime+=btime;
            }else{
                totaltime+=mid;
            }
        }
        return totaltime>= (mid*n);
    }
    long long maxRunTime(int n, vector<int>& b) {
        long long low=0;
        long long high=0;
        for(int i=0;i<b.size();i++){
            high+=b[i];
        }
        long long ans=0;
        while(low<=high){
            long long mid= low+(high-low)/2;
            if(possible(b,mid,n)){
                ans=mid;
                low=mid+1;
            }else{
                high= mid-1;
            }
        }
        return ans;
    }
};
