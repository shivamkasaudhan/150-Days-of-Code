// 9. Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long int ans = 0;
        int temp = x;
        while(temp > 0) {
            int rem = temp % 10;
            ans = ans * 10 + rem;
            temp /= 10;
        }
        return x == ans;
    }
};