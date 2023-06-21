#include <iostream>
#include <string>
//optimized version of replacespaces 1
//tc= O(n)
//space complexity O(1)
using namespace std;
int main(){
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
           cout<<'@'<<'4'<<'0';
        }else{
            cout<<s[i];
        }

    }
    return 0;
}
