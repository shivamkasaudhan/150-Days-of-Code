#include <iostream>
#include<vector>
using namespace std;
//tc O(n)
int main(){
    vector<int> a= {1,2,2,3,4,5};
    int s= 0;
    int e = a.size();
    while (s<e)
    {
        swap(a[s],a[e-1]);//tc O(1)
        s++;
        e--;
    }
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}