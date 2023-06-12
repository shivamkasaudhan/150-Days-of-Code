#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1); //insering an element at back tc O(1)
    l.push_front(2);//inserting an element at posision 0 tc O(1)
    cout<<"before erase: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin()); //erase begin / first element tc O(n)
    cout<<"after erase: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_back();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size: "<<l.size(); //returns size of list
    list<int> n(5,1); // creating new list of size 5 containing all values equal TO 1
    cout<<"new list: ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}