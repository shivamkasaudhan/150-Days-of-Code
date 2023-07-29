// 2022. Convert 1D Array Into 2D Array
//tc O(m*n)
// sc O(m*n)
//100% beats
//code
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size()) return {}; 
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<original.size();i++){
            ans[i/n][i%n]=original[i];
        }
        return ans;
    }
};