// 344. Reverse String
//one liner using stl
//tc O(n)

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};
//diffrent solution
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end = s.size()-1;
        while(start<=end){
            swap(s[start++],s[end--]);
        }   
    }
};