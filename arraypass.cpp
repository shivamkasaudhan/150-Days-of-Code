#include <iostream>
using namespace std;
int getmin(int a[],int n){
    int min= INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)     
        {
            min=a[i];
        }
        
    }
    return min;
    
}
int getmax(int a[],int n){
    int max= INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)     
        {
            max=a[i];
        }
        
    }
    return max;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<getmax(a,n);
    cout<<endl<<getmin(a,n)<<endl;
    
    
    return 0;
}