// 2710. Remove Trailing Zeros From a String
//tc O(n)
class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num[num.size()-1]=='0'){
            num.pop_back();
        }
        return num;
        
    }
};