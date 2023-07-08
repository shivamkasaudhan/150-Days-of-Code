// 1768. Merge Strings Alternately
//tc O(n)
//100% beats
//code
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m = word2.size();
        int i=0;
        int j=0;
        string s="";
        while(i < n && j < m){
            s.push_back(word1[i]);
            s.push_back(word2[j]);
            i++;
            j++;
        }
        while(i<n){
            s.push_back(word1[i]);
            i++;
        }
        while(j<m){
            s.push_back(word2[j]);
            j++;
        }
        return s;
        
    }
};
