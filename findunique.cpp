#include <iostream>
using namespace std;
int find_unique(int a[],int n){
   int ans = 0;
    
    for(int i = 0; i<n; i++) {
        ans = ans^a[i];
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    find_unique(a,n);
    return 0;
}