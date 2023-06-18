#include <iostream>
using namespace std;
char get_maxoccur(string s){
    int a[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch= s[i];
        int number = 0;
        if (ch>='a' && ch<='z')
        {
            number = ch-'a';
        }else{
            number= ch - 'A';
        }
        a[number]++;
        
    }
    int max= -1;
    int ans;
    for (int i = 0; i < 26; i++)
    {
        if (max<a[i])
        {
            ans=i;
            max=a[i];
        }
    }
    char answer = 'a'+ans;
    return answer;
    
}
int main(){
    string x;
    cin>>x;
    cout<<get_maxoccur(x);
    return 0;
}