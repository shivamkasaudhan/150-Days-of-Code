// 1431. Kids With the Greatest Number of Candies
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maximum= *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            ans.push_back(candies[i]+extraCandies>=maximum);
        }
        return ans;
    }
};

