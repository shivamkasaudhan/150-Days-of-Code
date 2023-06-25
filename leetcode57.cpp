// 2710. Remove Trailing Zeros From a String
//tc O(n)
class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num[num.size()-1]=='0'){
            num.pop_back();
        }
        return num;
        
    }
};
// 2586. Count the Number of Vowel Strings in Range
//tc O(n)
class Solution {
public:
    bool vowelorNot(char c){
        return c == 'a' || c ==  'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            string word=words[i];
            if(vowelorNot(word[0]) && vowelorNot(word[word.size()-1])){
                count++;
            } 
        }
        return count;   
    }
};

// 551. Student Attendance Record I
//tc O(n)
//100% beats
class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        bool flag= true;
        for(int i=0; i<s.size();i++){
            if(s[i]=='A'){
                count++;
            }
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                flag= false;
            }
        }
        if(count>=2){
            flag= false;
        }
        return flag;
        
    }
}; 

