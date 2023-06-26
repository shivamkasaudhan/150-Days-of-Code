// 2299. Strong Password Checker II
// tc O(n)
//100 % beats
class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int charcount=0;
        int lowercase=0;
        int uppercase=0;
        int digit=0;
        int special=0;
        for(int i=0;i<password.size();i++){
            if(password[i]>='a' && password[i]<='z'){
                lowercase++;
                charcount++;
            }else if(password[i]>='A' && password[i]<='Z'){
                uppercase++;
                charcount++;
            }else if(password[i]>='0' && password[i]<='9'){
                digit++;
                charcount++;
            }else{
                special++;
                charcount++;
            }

            if(password[i]==password[i+1]){
                return false;
            }
        }
        if(charcount>=8 && lowercase>=1 && uppercase>=1 && digit>=1 && special>=1){
            return true;
        }
        return false;

        
    }
};



