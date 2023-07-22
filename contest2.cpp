// Biweekly Contest 109
// able to solved ploblem out of 4
//(i) 6930. Check if Array is Good
//code
//tc O(n)
class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]!=i+1){
                return false;
            }
        }
        if(nums[n-1]!=n-1){
            return false;
        }
        return true;
    }
};
//(ii) 6926. Sort Vowels in a String
//code
//tc O(nlogn)
//sc O(n)
class Solution {
public:
    bool isvowel(char s){
        bool flag=false;
        if(s=='a' ||s== 'A' ||s== 'e' ||s== 'E' ||s== 'i' || s=='I' || s=='o' ||s== 'O' ||s== 'u' || s=='U'){
            flag=true;
        }
        return flag;
    }
    string sortVowels(string s) {
        vector<char> temp;
        string ans;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                temp.push_back(s[i]);
            }
        }
        sort(temp.begin(),temp.end());
        int count=0;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                ans.push_back(temp[count]);
                count++;
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

