// 1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        bool flag = true;
        for(int i = 2; i<n;i++){
            if(arr[i]-arr[i-1]!=d){
                flag = false;
                break;
            }

        }
        return flag;

        
    }
};
// 367. Valid Perfect Square
//brute force
//100% beats
// tc O(n)
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i =1;
        while(num>0){
            num-=i;
            i+=2;
        }
        return num==0;
        
    }
};
//using binary search 
//tc O(logn)
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s=1;
        long long int e = num/2;
        if(num==0 || num ==1){
            return true;
        }
        while(s<=e){
            long long int  mid= s+(e-s)/2;
            if(mid*mid == num){
                return true;
            }else if(mid*mid<num){
                s= mid+1;
            }else{
                e= mid-1;
            }
        }
        return false;
    }
};


