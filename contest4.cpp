// Weekly Contest 356
//solved 1 out of 4
// 2798. Number of Employees Who Met the Target (accepted)
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
        
    }
};
//2- 2801. Count Stepping Numbers in Range(not sccepted)
// tle on this code 
class Solution {
public:
    int strtoint(string s) {
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        int temp = s[i] - '0';
        ans = ans * 10 + temp;
    }
    return ans;
}

int countSteppingNumbers(string low, string high) {
    int a = strtoint(low);
    int b = strtoint(high);
    int count = 0;

    for(int i = a; i <= b; i++) {
        if (i <= 9) {
            count++;
        } else {
            bool isStepping = true;
            string numStr = to_string(i);
            for (int j = 1; j < numStr.size(); j++) {
                if (abs(numStr[j] - numStr[j - 1]) != 1) {
                    isStepping = false;
                    break;
                }
            }
            if (isStepping) {
                count++;
            }
        }
    }
    return count;
}

};