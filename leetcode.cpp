// 1108. Defanging an IP Address
//time complexity- O(n)
//space complexity -O(n)
//beats 36%
class Solution {
public:
    string defangIPaddr(string address) {
        string temp;
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                temp.push_back('[');
                temp.push_back('.');
                temp.push_back(']');
            }else{
                temp.push_back(address[i]);
            }
        }
        return temp;
        
    }
};
// 709. To Lower Case
//tc O(n)
//sc O(n)
//100% beats
class Solution {
public:
    string toLowerCase(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]<=90 && s[i]>=65){
                temp+=s[i]+32;
            }else{
                temp+=s[i];
            }
        }
        return temp;
        
    }
};
//443. String Compression
//O(n)
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex =0;
        int n = chars.size();
        while(i<n){
            int j= i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ansindex++]=chars[i];
            int count= j-i;
            if(count>1){
                string cnt= to_string(count);
                for(char ch: cnt){
                    chars[ansindex++]= ch;
                }
            }
            i=j;
        }
        return ansindex;
    }
};