//day24
#include <iostream>
using namespace std;
bool ckeck(int x, int y, int z){
    int a = max(x,max(y,z));
    int b,c;
    if (a==x){
        b=y;
        c=z;
    }else if (a==y)
    {
        b=x;
        c=z;
    }else{
        b=y;
        c=x;
    }
    if (a*a== b*b+c*c)
    {
        return true;
    }
    return false;
}
int main(){
    int a, b,c;
    cin>>a>>b>>c;
    cout<<ckeck(a,b,c);
    return 0;
}