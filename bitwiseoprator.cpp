#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a&b: "<<(a&b)<<endl; 
    cout<<"a|b: "<<(a|b)<<endl; 
    cout<<"~a: "<<(~a)<<" ~b: "<<(~b)<<endl; 
    cout<<"a^b: "<<(a^b)<<endl; 
    cout<<(15<<1)<<endl;
    cout<<(15<<2)<<endl;
    cout<<(15>>1)<<endl;
    cout<<(15>>2)<<endl;
    return 0;
}