// 2678. Number of Senior Citizens
//tc O(n)
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        int age;
        for(auto v: details){
            age= (v[11]-'0')*10+(v[12]-'0');
            if(age>60){
                count++;
            }
        }
        return count; 
    }
};
// 
2733. Neither Minimum nor Maximum
// tc O(nlogn)
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n= nums.size();
        if(n<=2){
            return -1;
        }
        sort(nums.begin(),nums.end());
        return nums[1];
        
    }
};

// 374. Guess Number Higher or Lower

// tc O(logn)
// Algo - binary search

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=1;
        int e= n;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(guess(mid)==0){
                return mid;
            }else if(guess(mid)==-1){
                e=mid-1;
            }else{
                s= mid+1;
            }
        }
        return -1;
        
    }
};

