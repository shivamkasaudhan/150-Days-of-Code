// 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};
// 2660. Determine the Winner of a Bowling Game
class Solution {
public:
    int getcount(vector<int>& a)
    {
        int count=0,set=0;
        for(int i=0;i<a.size();i++)
        {
            if(set)
            {
                count+=2*a[i];
                set--;
            }
            else
            {
                count+=a[i];
            }
            if(a[i]==10)
            set=2;
        }
        return count;

    }

    int isWinner(vector<int>& player1, vector<int>& player2) 
    {
        int first=getcount(player1);
        int second=getcount(player2);
        if(first>second)
        return 1;
        else if(second>first)
        return 2;
        return 0;        
    }
};

// 771. Jewels and Stones
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        for(int i=0; i<jewels.size();i++ ){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
