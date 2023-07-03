// 2643. Row With Maximum Ones
//tc O(n^2)
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> count;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            int n=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    n++;
                }
            }
            count.push_back(n);
        }
        int max= *max_element(count.begin(),count.end());
        int index=0;
        for(int i=0;i<count.size();i++){
            if(count[i]==max){
                index=i;
                break;
            }
        }
        ans.push_back(index);
        ans.push_back(max);
        return ans;
    }
};
