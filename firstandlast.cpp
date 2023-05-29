// 34. Find First and Last Position of Element in Sorted Array
#include <iostream>
using namespace std;
int firstocc(int a[],int n, int key){
    int s=0;
    int e = n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if(a[mid]==key){
            ans=mid;
            e=mid-1;
        }else if (key>a[mid])
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int secondocc(int a[],int n, int key){
    int s=0;
    int e = n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if(a[mid]==key){
            ans=mid;
            s=mid+1;
        }else if (key>a[mid])
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int a[8]={1,2,3,3,3,3,3,5};
    cout<<firstocc(a,8,3);
    cout<<secondocc(a,8,3);
    return 0;
}
