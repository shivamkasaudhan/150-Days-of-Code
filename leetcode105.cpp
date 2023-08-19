// 504. Base 7
//tc O(num)
//sc O(1)
//code

class Solution {
public:
    string convertToBase7(int num) {
    int ans = 0;
    int i = 0;
    while (num!= 0)
    {
        int rem = num % 7;
        ans = ans + rem * pow(10, i);
        i++;
        num = num / 7;
    }
    string res = to_string(ans);
    return res;
    }
};