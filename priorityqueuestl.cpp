#include <iostream>
#include <queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> max;//hoding max value
    //min heap
    priority_queue<int, vector<int>, greater<int>> min; //holding min value
    max.push(1);//pushing values tc O(1)
    max.push(2);
    max.push(0);
    max.push(3);
    cout<<"Size of max: "<<max.size()<<endl; //size of queue
    int n= max.size();
    for (int i = 0; i < n; i++)
    {
        cout<<max.top()<<" ";//it gives top (gretest element) 
        max.pop();//erase that element so second most greatest value will be print in second itration
    }cout<<endl;
    min.push(2);
    min.push(1);
    min.push(0);
    min.push(3);
    cout<<"Size of min: "<<min.size()<<endl;
    int m= min.size();
    for (int i = 0; i < m; i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }cout<<endl;
    cout<<"Size after print: "<<max.size()<<" "<<min.size()<<endl;
    cout<<"Empty or not: "<<max.empty()<<" "<<min.empty()<<endl;
    
    return 0;
}