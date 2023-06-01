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
// 1346. Check If N and Its Double Exist
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool ans=false;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if((arr[i]==2*arr[j] || 2*arr[i]==arr[j] ) && i!=j){
                    ans=true;
                }
            }
        }
        return ans;
        
    }
};

