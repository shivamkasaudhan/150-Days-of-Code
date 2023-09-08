// 118. Pascal's Triangle
//tc O(n^2)
//sc O(n^2)
//code
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tringle(numRows);
        for(int i=0;i<numRows;i++){
            tringle[i].resize(i+1);
            tringle[i][0]=tringle[i][i]=1;
            for(int j=1;j<i;j++){
                tringle[i][j]=tringle[i-1][j-1]+tringle[i-1][j];
            }
        }
        return tringle;
        
    }
};