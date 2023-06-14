#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<binary_search(v.begin(),v.end(),1)<<endl;
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    int a=3;
    int b=5;
    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
    string s= "shivam";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotate: ";
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    sort(v.begin(),v.end()); //intro sort based on quick sort, heap sort , and insrtion sort O(nlogn)
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}