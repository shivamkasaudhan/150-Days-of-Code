// 1816. Truncate Sentence
//tc O(n)
// 55% beats
class Solution {
public:
    string truncateSentence(string s, int k) {
        string n="";
        int i=0;
        while(k>0 && i<=s.size()){
            if(s[i]!=' '){
                n.push_back(s[i]);
            }else if(s[i]==' '){
                k--;
                n.push_back(' ');
            }
            i++;
        }
        n.pop_back();
        return n;
        
    }
};
