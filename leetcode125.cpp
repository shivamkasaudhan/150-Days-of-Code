// 167. Two Sum II - Input Array Is Sorted
//tc O(nlogn)
//sc O(1)
//code

class Solution {
public:
    int binary_search(vector<int>& numbers, int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (numbers[mid] == x) {
            return mid;
        } else if (numbers[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i < numbers.size(); i++){
            int j= binary_search(numbers, i+1, numbers.size()-1, target-numbers[i]);
                if(j!=-1){
                    return {i+1, j+1};
                }
            }
        return {};
    }
};
