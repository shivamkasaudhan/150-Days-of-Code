// 338. Counting Bits
//tc O(nlogn)
//sc O(n)
class Solution {
public:
    int count(int n){
        int bits=0;
        while(n>0){
            bits+=n%2;
            n/=2;
        }
        return bits;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};
