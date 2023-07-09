//2716. Minimize String Length
//tc O(n)
//97% beats
//code
class Solution {
public:
    int minimizedStringLength(string s) {
        int count[26]={0};
        for(int i=0;i<s.size();i++){
            int n= s[i]-'a';
            count[n]++;
        }
        int c=0;
        for(int i=0;i<26;i++){
            if(count[i]>0){
                c++;
            }
        }
        return c;
    }
};