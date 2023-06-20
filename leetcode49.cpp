// 2739. Total Distance Traveled
//88% beats
//tc = O(1) 
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
// 1732. Find the Highest Altitude
//100% beats
//tc O(n)
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum =0;
        vector<int> ele;
        ele.push_back(0);
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            ele.push_back(sum);
        }
        return *max_element(ele.begin(),ele.end());
        
    }
};




