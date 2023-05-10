//day24
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,temp,oct=0,rem,i=0;
    cin>>n;
    temp=n;
    while (temp>0)
    {
        rem=temp%10;
        oct=oct+rem*pow(8,i);
        i++;
        temp= temp/10;
    }
    cout<<oct;
    
    return 0;
}