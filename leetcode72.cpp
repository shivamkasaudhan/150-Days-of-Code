// 2000. Reverse Prefix of Word
//tc O(n^2)
//100% beats
//code
class Solution {
public:
    bool present(string word, char ch){
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                return true;
            }
        }
        return false;
    }
    string reversePrefix(string word, char ch) {
        int n;
        if(present(word,ch)){
            for(int i=0;i<word.size();i++){
                if(word[i]==ch){
                    n=i;
                    break;
                }
            }
        }else{
            return word;
        }
        int s=0;
        while(s<=n){
            swap(word[s],word[n]);
            s++;
            n--;
        }
        return word;
        
    }
};
