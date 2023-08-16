// 1678. Goal Parser Interpretation
//tc  O(n)
//sc  O(1)
//code
class Solution {
public:
    string interpret(string c){
        string ans="";
        int n= c.size()-1;
        int i=0;
        while(i<=n){
            if(c[i]=='G'){
                ans.push_back(c[i]);
                i++;
            }else if(c[i]=='(' && c[i+1]==')'){
                ans.push_back('o');
                i+=2;
            }else{
                ans.push_back('a');
                ans.push_back('l');
                i+=4;
            }
        }
        return ans;
        
    }
};
