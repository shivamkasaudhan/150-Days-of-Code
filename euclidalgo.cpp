#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    while (a!=b)
    {
        if(a<b){
            b=b-a;
        }else if (b<a)
        {
            a=a-b;
        }
    }
    return a;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}