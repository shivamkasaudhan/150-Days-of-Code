// 319. Bulb Switcher
//tc=O(sqrt(n))
class Solution {
public:
    int bulbSwitch(int n) {
        int count=0;
        int i=1;
        while((i*i)<=n){
            i++;
            count++;
        }
        return count;
        
    }
};
//another approach
class Solution {
public:
    int bulbSwitch(int n) {
        int ans= sqrt(n);
        return ans;
        
    }
};

