
// Biweekly Contest 113
// 2855. Minimum Right Shifts to Sort the Array
//tc O(n^2)
//sc O(n)
//code
class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());
    
    int n = nums.size();
    for (int shift = 0; shift < n; ++shift) {
        bool isSame = true;
        for (int i = 0; i < n; ++i) {
            if (nums[i] != temp[(i + shift) % n]) {
                isSame = false;
                break;
            }
        }
        if (isSame) {
            return shift;
        }
    }
    return -1;
}

};