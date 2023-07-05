// 867. Transpose Matrix
//tc O(n^2)
//97% beats
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int a = matrix[0].size();
        int b= matrix.size();
        vector<vector<int>> ans;
        for(int i =0; i<a;i++){
            vector<int> v;
            for(int j=0;j<b;j++){
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
