// 1329. Sort the Matrix Diagonally
//tc O(m*n*log(d))
//sc O(m*n)
//code
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n= mat[0].size();
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> map;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                map[i-j].push(mat[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=map[i-j].top();
                map[i-j].pop();
            }
        }
        return mat;
    }
};
