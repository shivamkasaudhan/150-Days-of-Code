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