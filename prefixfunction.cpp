#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>
int main(){
    string s;
    cin>>s;
    int n= s.size();
    vector<int> pi(n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <=i; k++)
        {
            if(s.substr(0,k)==s.substr(i-k+1,k)){
                pi[i]=k;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<pi[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}