#include <iostream>
#include <queue>//adding queue
//first in first out
using namespace std;
int main(){
    queue<string> q;
    q.push("My"); //pushing an element
    q.push("name");
    q.push("is");
    q.push("Shivam");
    q.push("Kasaudhan");
    cout<<"First element before pop."<<endl;
    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size:(befor) "<<q.size()<<endl;
    cout<<"First element after pop."<<endl;
    q.pop();//poping first element in this case f.e. is My
    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size:(after) "<<q.size()<<endl;//returns size of queue
    return 0;
}
//tc for all O(1)