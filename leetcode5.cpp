// 29. Divide Two Integers
class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }
        int ans = dividend / divisor;
        return ans;
    }
};
// The function first checks a special case where dividend is the minimum possible integer value (which is equal to -2^31), 
// and divisor is -1. This is a special case because if divisor is -1 and dividend is the minimum value, then the result of 
// the division would be equal to the maximum possible integer value (which is 2^31-1). However, in C++, if we try to compute 
// INT_MIN / -1, it results in integer overflow and leads to undefined behavior. Therefore, the code returns INT_MAX explicitly 
// for this special case.
// 371. Sum of Two Integers

class Solution {
public:
    int getSum(int a, int b) {
        return a+b;
    }
};
