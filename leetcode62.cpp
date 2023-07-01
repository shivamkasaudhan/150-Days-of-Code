// 1672. Richest Customer Wealth
//80% beaats
//tc O(m*n) m=rows, n=column
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum ;
        for(int i=0;i<accounts.size();i++){
            int s=0;
            for(int j=0;j<accounts[i].size();j++){
                s +=accounts[i][j];
            }
            sum.push_back(s);
        }
        int max=*max_element(sum.begin(),sum.end());
        return max;
    }
};

// 1351. Count Negative Numbers in a Sorted Matrix
//tc O(m*n)
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
};