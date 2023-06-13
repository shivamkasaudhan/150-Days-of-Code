#include <iostream>
#include <stack> //have tu include stack 
//first in last out
using namespace std;
int main(){
    stack<string> s; //initializing stack that contain string
    s.push("My");//pushing element
    s.push("Name"); 
    s.push("is");
    s.push("Shivam");
    s.push("Kasaudhan");
    cout<<"Top element before pop- "<<endl;
    cout<<"Top element: "<<s.top()<<endl;//give the letest pushed element
    s.pop(); //erase the recently pushed element
    cout<<"Top element after pop- "<<endl;
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl; //size of stack
    cout<<"Empty or not: "<<s.empty()<<endl;//give boolean value for stack is empty or not
    return 0;
}