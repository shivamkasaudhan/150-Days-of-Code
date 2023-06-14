#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="Shivam"; //O(1)
    m[3]= "Kasaudhan";
    m[2]= "Kumar";
    m.insert({5,"SKK"});//tc O(logn)
    cout<<"Before erase. "<<endl;
    for(auto i:m){
        cout<<" "<<i.first<<" "<<i.second;
    }
    cout<<endl;
    cout<<"finding 13: "<<m.count(13)<<endl; //tc O(logn)
    cout<<"After erase: ";
    m.erase(5);//tc O(logn)
    for(auto i:m){
        cout<<" "<<i.first<<" "<<i.second;
    }cout<<endl;
    auto it= m.find(5);//tc O(logn)
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}