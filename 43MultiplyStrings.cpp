// 43. Multiply Strings
//testing of function
#include <iostream>
#include <string>
// #include <string.h>
using namespace std;
int integer(string s){
        int ans=0;
        for(int i=0;i<s.size();i++){
            int temp = s[i]-'0';
            ans= ans*10+temp;
        }
        return ans;
    }
int main(){
    string s="20";
    cout<<integer(s);
    return 0;
}

