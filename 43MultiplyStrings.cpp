// 43. Multiply Strings
//runtime error 
class Solution {
public:
    int integer(string s){
        long long ans=0;
        for(int i=0;i<s.size();i++){
            long long temp = s[i]-'0';
            ans= ans*10+temp;
        }
        return ans;
    }
    string multiply(string num1, string num2) {
        
        long long a= integer(num1);
        long long b= integer(num2);
        long long c = a*b;
        string answer="";
        while(c>0){
            int temp= c%10;
            answer.push_back('0'+temp);
            c/=10;
        }
        if(answer.empty()){
            answer= "0";
        }
        reverse(answer.begin(),answer.end());
        return answer;
        
    }
};
//correct code 
//tc O(m+n)

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        vector<int> ans(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;i--){
            for(int j= num2.size()-1;j>=0;j--){
                ans[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                ans[i+j]+=ans[i+j+1]/10;
                ans[i+j+1]%=10;
            }
        }
        int i=0;
        while(i<ans.size() && ans[i]==0){
            ++i;
        }
        string result="";
        while(i<ans.size()){
            result.push_back(ans[i++]+'0');
        }
        return result;
    }
};
