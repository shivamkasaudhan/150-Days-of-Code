#include <iostream>
using namespace std;
int main(){
    int n=55;
    double m= 45.04;
    cout<<n<<endl;
    //address of operator -&
    int *ptr= &n;
    cout<<*ptr<<" "<<n<<" "<<ptr<<endl;
    cout<<"aadress of n: "<<&n<<endl;
    cout<<m<<endl;
    //address of operator -&
    double *ptr1= &m;
    cout<<*ptr1<<" "<<m<<" "<<ptr1<<endl;
    cout<<"aadress of m: "<<&m<<endl;
    // int *ptr2= 0;// null pointer
    // cout<<*ptr2; //returns segmentation fault
    (*ptr)++;
    cout<<"after "<<n<<endl;
    int i=3;
    int *t=&i;
    cout<<(*t)++; 
    int **q=&t; //double pointers
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    void *ptr3; //void pointers
    int j=10;
    ptr=&j;
    cout<<&j;
    cout<<endl<<ptr<<endl;
    int *w; //wild pointer
    int s=10;
    w=&s; //now w is not a null pointer

    return 0;
}