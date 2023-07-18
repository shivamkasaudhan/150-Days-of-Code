#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int a[3][3]= {{5,2,3},{6,9,9},{1,1,1}};
    int maximum= INT32_MIN;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=a[i][j];
            maximum= max(sum,maximum);
        }
    }
    cout<<maximum<<endl;
    return 0;
}