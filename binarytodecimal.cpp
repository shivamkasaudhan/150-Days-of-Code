#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num,rem,temp,i=0,des=0;
    cin>>num;
    temp= num;
    while (temp>0)
    {
        rem=temp%10;
        des=des+rem*pow(2,i);
        i++;
        temp= temp/10;

    }
    cout<<des;
    
    return 0;
}