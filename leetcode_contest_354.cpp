//question done 1 out of 4
// 2778. Sum of Squares of Special Elements
//tc O(n)
//submited succesfully
//code
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int summ=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(n%(i+1)==0){
                summ=nums[i]*nums[i]+summ;
            }
        }
        return summ;
        
    }
};