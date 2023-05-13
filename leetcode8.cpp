// 171. Excel Sheet Column Number
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(auto c: columnTitle) {
            int x = c - 'A' + 1;
            ans = ans * 26 + x;
        }
        return ans;
    }
};
