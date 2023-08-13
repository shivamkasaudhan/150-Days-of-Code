// 1941. Check if All Characters Have Equal Number of Occurrences
//tc O(nlogn)
//sc O(1)
//code
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            int n=s[i]-'a';
            count[n]++;
        }
        sort(count.begin(),count.end());
        for(int i=0;i<25;i++){
            if(count[i]!=count[i+1] && count[i]>0 && count[i+1]>0){
                return false;
                
            }
        }
        return true;
    }
};
