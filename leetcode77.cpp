// 2769. Find the Maximum Achievable Number
//code(i)
//tc O(1)
//29% beats
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num+2*t;   
    }
};
//code(ii) optimized
//100% beats
// tc O(t)
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int temp=t;
        while(t>0){
            num++;
            t--;
        }
        return num+temp;
    }
};
