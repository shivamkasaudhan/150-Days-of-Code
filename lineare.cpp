#include <iostream>
using namespace std;
bool linear(int a[],int n, int key){
    for (int i = 0; i < n; i++)
    {
        return key==a[i];
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<linear(a,n,5);
    
    return 0;
}