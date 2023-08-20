// 278. First Bad Version
//tc O(logn)
//sc O(1)
//code
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int s=0;
        long long int e=n;
        long long int answer;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            if(isBadVersion(mid)==1){
                answer= mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return answer;
    }
};