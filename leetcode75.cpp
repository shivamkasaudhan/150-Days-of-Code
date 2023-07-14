// 1704. Determine if String Halves Are Alike
//tc O(n)
//code
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n= s.size();
        int count1=0;
        int count2=0;
        for(int i=0;i<n/2;i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' ){
                count1++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' ){
                count2++;
            }
        }
        return (count1==count2);
        
    }
};
