// 2114. Maximum Number of Words Found in Sentences
//tc O(n*m)
//sc O(1)
//code
class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int count=1;
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]==' '){
                    count++;
                }
            }
            ans= max(ans,count);
        }
        return ans;
    }
};
