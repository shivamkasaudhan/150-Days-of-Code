// 6. Zigzag Conversion
//tc  O(n)
//sc O(n)
//code
class Solution {
public:
    string convert(string s, int numRows) {
        int n= s.length();
        if(numRows == 1) return s;
        if(numRows >= n) return s;

        int direction = -1;
        int row = 0;
        vector<char> ans[numRows];
        for(auto c:s){
            ans[row].push_back(c);
            if(row == 0 || row == numRows-1 ){
                direction*=-1;
            }
            row+=direction;

        }
        string result="";
        for(auto x:ans){
            for(auto y:x){
                result+=y;
            }
        }
        return result;
        

        
    }
};