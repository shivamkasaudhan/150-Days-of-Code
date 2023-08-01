// 541. Reverse String II
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k);
            } else {
                // reverse remaining characters if they are less than 'k'
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};

