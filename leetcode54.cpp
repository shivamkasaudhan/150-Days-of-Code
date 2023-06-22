// 2351. First Letter to Appear Twice
//tc )=O(n)
//100% beats
class Solution {
public:
    char repeatedCharacter(string s) {
        int count[26]={0};
        char ans;
        for(int i=0;i<s.size();i++){
            int temp =s[i]-'a';
            count[temp]++;
            if(count[temp]==2){
                ans= 'a'+temp;
                break;
            }
        }
        return ans;
        
    }
};
//2278. Percentage of Letter in String
//100% beats
//tc O(n)
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count[26]={0};
        for(int i=0;i<s.size();i++){
            int index= s[i]-'a';
            count[index]++;
        }
        int n= letter-'a';
        int percent = (count[n]*100)/s.size();
        return percent;
        
    }
};