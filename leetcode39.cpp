// 744. Find Smallest Letter Greater Than Target
//brute force
//94% beats
// tc O(n)
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int t = target - '0';
        for(char x:letters){
            int y=x-'0';
            if(y>t)return x;
        }
        return letters[0];

        
    }
};
//by using binary search
//tc O(logn)

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int t = target - '0';
        int n=letters.size();
        int s=0;
        int e =n-1;
        string ans ="";
        while(s<=e){
            int mid= s+(e-s)/2;
            int y = letters[mid]-'0';
            if(y>t){
                ans=letters[mid];
                e= mid-1;
            }else{
                s= mid+1;
            }
        } 
        if(ans.size()>0)return ans[0];
        return letters[0];
    }
};
