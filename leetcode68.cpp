// 728. Self Dividing Numbers
// tc O(n^2)
//code
class Solution {
public:
    vector<int> numbers(int n){
        vector<int> a;
        while(n>0){
            a.push_back(n%10);
            n/=10;
        }
        return a;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i =left;i<=right;i++){
            vector<int> a= numbers(i);
            bool selfdiv = true;
            for(int j=0;j<a.size();j++){
                if(a[j]==0 || i%a[j]!=0){
                    selfdiv = false;
                    break;
                }
            }
            if(selfdiv){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
