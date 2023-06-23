// 1812. Determine Color of a Chessboard Square
//O(n)
//100% beats
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n= coordinates[0]+coordinates[1];
        return (n%2!=0);

    }
};
// 389. Find the Difference
//100% beats
//tc O(m+n)
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<s.size();i++){
            sum = sum + s[i];
        }
        for(int i=0;i<t.size();i++){
            sum1 = sum1 + t[i];
        }
        char ans= sum1-sum;
        return ans;
        
    }
};

