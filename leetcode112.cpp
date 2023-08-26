// 2094. Finding 3-Digit Even Numbers
//tc O(n)
//sc  O(1)
//code
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        int freq[10] = {0};

        int di = digits.size();
        for(int i=0; i<di; i++){
            freq[digits[i]]++;
        }

        vector<int> ans;
        for(int i=1; i<10; i++){
            if(freq[i]){
                for(int j=0; j<10; j++){
                    if(freq[j] > (i==j)){
                        for(int k=0; k<10; k+=2){
                            if(freq[k] > ((i==k) + (j==k))){
                                ans.push_back(i*100 + j*10 + k);
                            }
                        }
                    }
                }
            }
        }

        return ans;
    }
};
