#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(5,1); //it initialize a vector, size of 5, all values equal to 1;
    cout<<"Elements in Vector a: ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    vector<int> v;
    cout<<v.size()<<" "<<v.capacity()<<endl; //it shows the size(element present in vector) , capacity(how many element can be stored in vector)
    v.push_back(10);//tc O(1)
    v.push_back(4);//insert a element at the back position
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl; //tc O(1)
    cout<<"element at 2nd position: "<<v.at(2)<<endl;
    cout<<"First: "<<v.front()<<endl; //first element
    cout<<"Last: "<<v.back()<<endl;//last element
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back(); //tc O(1) // removes last push_back element
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.clear(); //clears the vector but capacity would be same
    cout<<v.size()<<" "<<v.capacity()<<endl;
    vector<int> copy(a); //tc O(1) // copies all element from vector a - name of new vector(name of vector from where to copy elements)
    cout<<"Printing the copy vector of a: ";
    for(int i:copy){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}