#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};//initializing the array 
    int size= a.size(); //storing size of array
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd position: "<<a.at(2)<<endl; //tc O(1)
    cout<<"Empty or not: "<<a.empty()<<endl;  //tc O(1)
    cout<<"First element of array: "<<a.front()<<endl; // tc O(1)
    cout<<"Last element of array: "<<a.back()<<endl;  // tc O(1)
    
    
    return 0;
}