// 240. Search a 2D Matrix II
//tc O(m+n)
//sc O(1)
//code
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rIndex=0;
        int cIndex=col-1;
        while(rIndex<row && cIndex>=0){
            int ele=matrix[rIndex][cIndex];
            if(ele==target){
                return true;
            }else if(ele>target){
                cIndex--;
            }else{
                rIndex++;
            }
        }
        return false;
    }
};
