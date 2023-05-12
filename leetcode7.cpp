// 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int a_len =a.size();
        int b_len= b.size();
        string s;
        if(a_len>b_len){
            b=s.append(a_len-b_len,'0')+b;
        }else if(b_len>a_len){
            a=s.append(b_len-a_len,'0')+a;

        }
        int carry=0;
        string ans="";
        for(int i=a.size()-1;i>=0;i--){
            int sum = (a[i]-'0')+(b[i]-'0')+carry;
            ans= to_string(sum%2)+ans;
            carry=sum/2;
        }
        if(carry!=0){  
            ans='1'+ans;
        }
        return ans;
    }
};
