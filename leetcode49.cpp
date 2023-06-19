// 2739. Total Distance Traveled
//88% beats
//tc = O(1) // linear
class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans;
        int transfer= (mainTank-1)/4;
        if(additionalTank>=transfer){
            ans= (mainTank+transfer)*10;
        }else{
            ans= (mainTank+additionalTank)*10;
        }
        return ans;
        
    }
};
