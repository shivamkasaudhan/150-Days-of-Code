// 1662. Check If Two String Arrays are Equivalent
//tc O(m+n)
//100% beats
//code
class Solution {
public:
    string arraytostring(vector<string>& s){
        string newS="";
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s[i].size();j++){
                newS.push_back(s[i][j]);
            }
        }
        return newS;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = arraytostring(word1);
        string b = arraytostring(word2);
        return (a==b);
    }
};
