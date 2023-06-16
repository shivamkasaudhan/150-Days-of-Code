// 2678. Number of Senior Citizens
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
