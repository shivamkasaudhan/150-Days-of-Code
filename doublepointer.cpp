#include <iostream>
using namespace std;
void update(int** n){
    // n=n+1; //no change
    *n=*n+1;
}
int main(){
    int n=5;
    int* p=&n;
    int** m=&p;
    cout<<p<<endl;
    cout<<m<<endl;
    cout<<n<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<**m<<endl;


    cout<<&n<<endl;
    cout<<p<<endl;
    cout<<*m<<endl;

    cout<<"function"<<endl;
    update(m);
    cout<<n<<endl;
    cout<<p<<endl;
    cout<<m<<endl;
    cout<<&m<<endl;
    cout<<*m<<endl;
    cout<<*p<<endl;
    return 0;
}