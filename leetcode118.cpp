//2482. Difference Between Ones and Zeros in Row and Column
//tc O(m*n)
//sc O(m*n)
//code
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> row(m,0);
        vector<int> col(n,0);
        vector<vector<int>> matrix(m, vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //matrix[i][j]=row[i]+col[j]-(m+n-row[i]-col[j]);  
                matrix[i][j]=2*(row[i]+col[j]) -m-n;
            }
        }
        return matrix;
        
    }
};