// 1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        bool flag = true;
        for(int i = 2; i<n;i++){
            if(arr[i]-arr[i-1]!=d){
                flag = false;
                break;
            }

        }
        return flag;

        
    }
};

