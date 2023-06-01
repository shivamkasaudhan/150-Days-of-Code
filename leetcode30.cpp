// 2706. Buy Two Chocolates
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int ans=money;
        if(prices[0]+prices[1]<=money){
            ans= money - prices[0] - prices[1];
        }
        return ans;
        
    }
};
// 1385. Find the Distance Value Between Two Arrays
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i,j, ans=0;
        for( i=0;i<arr1.size();i++){
            for(j=0;j<arr2.size();j++){
                int diff =abs(arr1[i]-arr2[j]);
                if(diff<=d){
                    break;
                }
            }
            if(j==arr2.size())
                    ans++;
        }
        return ans;
        
    }
};
