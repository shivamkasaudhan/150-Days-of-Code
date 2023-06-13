#include <iostream>
using namespace std;
int getpivot(int a[], int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    return s;
}
int main(){
    int a[4]= {11,13,15,17};
    cout<<getpivot(a,4);
    return 0;
}