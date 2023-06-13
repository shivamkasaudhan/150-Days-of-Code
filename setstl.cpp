#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(7); //tc O(logn)
    s.insert(0);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(s.begin()); // O(logn)
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    cout<<s.count(5)<<endl;
    set<int>::iterator itr = s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    return 0;
}