#include <iostream>
using namespace std;
void swapalter(int a[],int n){
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            swap(a[i],a[i+1]);
        }
        
    }
    
}
void print(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;   
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    swapalter(a,n);
    print(a,n);
    return 0;
}