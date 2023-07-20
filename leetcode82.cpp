// 2119. A Number After a Double Reversal
//tc O(1)
// 100% beats
//code
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }else if(num%10==0){
            return false;
        }
        return true;
    }
};
