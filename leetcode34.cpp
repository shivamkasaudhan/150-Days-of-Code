// 69. Sqrt(x)
//brute force 
// not optimized tc = O(n)
//32% beats
class Solution {
public:
    int mySqrt(int x) {
        int root = pow(x,0.5);
        return root;
    }
};
// using bimary search 
//100% beats 
class Solution {
public:
    long long int bsearch(int n){
        int s=0;
        int e=n;
        int mid= s+ (e-s)/2;
        long long int ans= -1;
        while(s<=e){
            long long square = (long long) mid*mid;
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;

    }
    int mySqrt(int x) {
       return bsearch(x);
    }
};