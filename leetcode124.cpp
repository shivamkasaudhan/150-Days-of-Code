// 832. Flipping an Image
//tc O(n^2)
//sc O(n^2)
//code
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n= image.size();
        vector<vector<int>> temp(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[i][j]=image[i][n-1-j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(temp[i][j]==0){
                    temp[i][j]=1;
                }else if(temp[i][j]==1){
                    temp[i][j]=0;
                }
            }
        }
        return temp;
    }
};
//optimized
//tc O(n^2)
//sc O(n^2)
//code
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n= image.size();
        vector<vector<int>> temp(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[i][j]=image[i][n-1-j];
                if(temp[i][j]==0){
                    temp[i][j]=1;
                }else if(temp[i][j]==1){
                    temp[i][j]=0;
                }
            }
        }
        return temp;
    }
};