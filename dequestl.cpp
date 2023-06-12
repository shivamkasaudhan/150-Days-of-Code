#include <iostream>
#include<deque> //include deque library
using namespace std;
int main(){
    deque<int> d; // initializing deque
    d.push_back(1); //inserting element at back position
    d.push_front(2); // inserting a element at front position
    
    cout<<"First element: "<<d.at(0)<<endl; // give value on that position
    cout<<d.front(); //print first element
    cout<<endl<<d.back();//print second element
    cout<<endl<<"Empty or not: "<<d.empty()<<endl;//check deque is empty or not
    cout<<"size before erase: "<<d.size()<<endl;//show size of deque
    d.erase(d.begin(),d.begin()+1); // erase element //tc O(n)***
    cout<<"size after erase: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back(); //deleting element from back
    // d.pop_front(); //deleting element from front
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}