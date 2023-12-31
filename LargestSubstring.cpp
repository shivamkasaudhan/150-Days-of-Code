// 1624. Largest Substring Between Two Equal Characters
//tc  o(N^2)
//sc O(1)
//code
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans =-1;
       for(int i = 0; i< s.size(); i++){
           for(int j = s.size()-1; j>i; j--){
               if(s[i] == s[j]){
                   int num = j - i - 1;
                   ans = max(ans, num);
               }
           }
       }
        return ans;
        
    }
};