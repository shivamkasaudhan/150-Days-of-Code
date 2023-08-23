//2428. Maximum Sum of an Hourglass
//tc O(n^2)
//sc O(1)
//code
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        int ans=0;
        for(int i=1;i+1<n;i++){
            for(int j=1;j+1<m;j++){
                int sum= grid[i][j]+grid[i-1][j]+grid[i+1][j]+grid[i-1][j-1]+grid[i-1][j+1]+grid[i+1][j-1]+grid[i+1][j+1];
                ans=max(sum,ans);
            }
        }
        return ans;
    }
};