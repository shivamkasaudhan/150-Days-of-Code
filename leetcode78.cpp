// 48. Rotate Image
//tc O(n^2)
//100% beats
//code
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = matrix;
        int n = matrix.size()-1;
        for(int i=0;i<=n;i++){
            for(int j=0;j<matrix[i].size();j++){
                matrix[i][j]=temp[n-j][i];
            }
        }
    }
};
//11. Container With Most Water
//O(n)
//code
class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxwater=0;
        int s=0;
        int e= h.size()-1;
        while(s<e){
            int water=min(h[s],h[e])*(e-s);
            maxwater= max(maxwater,water);
            if(h[s]<h[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxwater;
        
    }
};

