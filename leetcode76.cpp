// 1507. Reformat Date
//tc O(1)
//100% beats 
//code
class Solution {
public:
    string reformatDate(string date) {
        string ans="";
        if(date[8]==' '){
            ans.push_back(date[9]);
            ans.push_back(date[10]);
            ans.push_back(date[11]);
            ans.push_back(date[12]);
        }else{
            ans.push_back(date[8]);
            ans.push_back(date[9]);
            ans.push_back(date[10]);
            ans.push_back(date[11]);
        }
        ans.push_back('-');
        string month[12]={"Jan","Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        string m="";
        if(date[4]==' '){
            m.push_back(date[5]);
            m.push_back(date[6]);
            m.push_back(date[7]);
        }else{
            m.push_back(date[4]);
            m.push_back(date[5]);
            m.push_back(date[6]);
        }
        int n;
        for(int i=0;i<12;i++){
            if(m==month[i]){
                n=i+1;
            }
        }
        if(n>9){
            int d=n/10;
            ans.push_back('0'+d);
            ans.push_back('0'+n%10);
        }else{
            ans.push_back('0');
            ans.push_back('0'+n);
        }
        ans.push_back('-');
        if(date[1]=='t' || date[1]=='r' || date[1]=='n' || date[1]=='s'){
            ans.push_back('0');
            ans.push_back(date[0]);
        }else{
            ans.push_back(date[0]);
            ans.push_back(date[1]);
        }
        
        return ans;
        
    }
};
