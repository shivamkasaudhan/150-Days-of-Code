#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int n=s.length();
    vector<int> pi(n,0);
    for (int i = 1; i < n; i++)
    {
        int j= pi[i-1];
        while (j>0 && s[i]!=s[j]){
            j=pi[j-1];
        }
        
        if(s[i]==s[j]){
            j++;
        }
        pi[i]=j;
    }
    int pos=-1;
    int i=0,j=0;
    while (i<t.size())
    {
        if (t[i]==s[j])
        {
            i++;
            j++;
        }else{
            if (j!=0)
            {
                j=pi[j-1];
            }else{
                i++;
            }
        }
        if(j==s.size()){
            pos=i-s.size();
            break;
        }
    }
    cout<<pos;
    
    
    return 0;
}