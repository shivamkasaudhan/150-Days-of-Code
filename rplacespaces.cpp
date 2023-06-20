#include <iostream>
#include <string>
//tc O(n)
// sc O(n)
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(s[i]);
        }
    }

    cout << temp << endl;
    return 0;
}
