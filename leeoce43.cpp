// 2485. Find the Pivot Integer
class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1)
            return n;
        int total_sum = n * (n + 1) / 2;
        int left_sum = 0;
        for (int i = 1; i <= n; i++) {
            left_sum += i;
            int right_sum = total_sum - left_sum+i;
            if (right_sum == left_sum) {
                return i;
            }
        }
        return -1;
    }
};
// 2481. Minimum Cuts to Divide a Circle
class Solution {
public:
    int numberOfCuts(int n) {
        if(n==1){
            return 0;
        }else if(n%2==0){
            return n/2;
        }else{
            return n;
        }
        
    }
};


