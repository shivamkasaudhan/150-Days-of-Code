// 69. Sqrt(x)
class Solution {
public:
    int mySqrt(int x) {
        int root = pow(x,0.5);
        return root;
    }
};

// 70. Climbing Stairs
class Solution {
public:
    int climbStairs(int n) {
        int a = 0, b= 1;
        for(int i = 0; i< n; i++){
            int temp = a+b;
            a= b;
            b= temp;
        }
        return b;
    }
};

// 231. Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0; i<=30; i++){
            int ans = pow(2,i);
            if(ans == n){
            return true;
        }
        }
        return false;
    }
};

// 326. Power of Three
class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0; i<20; i++){
            int ans = pow(3,i);
            if(ans== n){
                return true;
            }
        }
        return false;
    }
};

// 342. Power of Four
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n!= 1 && n%4 != 0){
            return false;
        }
        if(n<0)return false;
        for(int i = 0; i<16; i++){
            int ans = pow(4,i);
            if(n == ans) return true;
        }
        return false;
    }
};


