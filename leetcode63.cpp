// 1880. Check if Word Equals Summation of Two Words
//tc O(n)
//100% beats
class Solution {
public:
    int number(string s){
        int n=0;
        int i=s.size()-1;
        while(i>=0){
            int index= s[i]-'a';
            n+=index*pow(10,s.size()-1-i);
            i--;
        }
        return n;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return number(firstWord)+number(secondWord)==number(targetWord);
        
    }
};
