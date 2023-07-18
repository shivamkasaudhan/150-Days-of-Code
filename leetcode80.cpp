// 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
//tc O(n)
// code {i}
class Solution {
public:
    int minPartitions(string n) {
        vector<int> numbers;
        for(int i=0;i<n.size();i++){
            int temp= n[i]-'0';
            numbers.push_back(temp);
        }
        int max=*max_element(numbers.begin(),numbers.end());
        return max;
    }
};
//code {ii}
//tc O(n)
class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            int temp= n[i]-'0';
            ans=max(temp,ans);
        }
        return ans;
    }
};
//Question 2
//1528. Shuffle String
//tc O(n)
//90% beats
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for(int i=0;i<s.size();i++){
            ans[indices[i]]=s[i];
        }
        return ans;
        
    }
};