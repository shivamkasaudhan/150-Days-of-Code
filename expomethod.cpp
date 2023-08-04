#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int result=1;
    while (m>0)
    {
        if(m&1){
            result= result*n;
        }
        n=n*n;
        m=m>>1;
    }
    cout<<result;
    return 0;
}