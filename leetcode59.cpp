// 455. Assign Cookies
//tc O(nlogn)
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0, j=0;
        while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                i++;
            }
            j++;
        }
        return i;
        
    }
};
// 2185. Counting Words With a Given Prefix
//tc O(n^2)
class Solution {
public:
    bool present(string s, string pref){
        for(int i=0;i<pref.size();i++){
            if(s[i]!=pref[i]){
                return false;
            }
        }
        return true;
    }
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int count=0;
        for(int i=0;i<words.size();i++){
            if(present(words[i],pref)){
                count++;
            }
        }
        return count;
        
    }
};

