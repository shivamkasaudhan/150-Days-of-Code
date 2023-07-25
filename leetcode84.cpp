// 2011. Final Value of Variable After Performing Operations
//tc O(n)
//code
class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int ans=0;
        for(int i=0;i<o.size();i++){
            if(o[i][1] == '+' && o[i][2]=='+'){
                ans++;
            }else if(o[i][0] == '+' && o[i][1]=='+'){
                ++ans;
            }else if(o[i][1] == '-' && o[i][2]=='-'){
                ans--;
            }else{
                --ans;
            }
        }
        return ans;
        
    }
};

