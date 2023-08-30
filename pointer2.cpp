#include <iostream>
using namespace std;
int main(){
    int arr[10]={0,11,1,12,3};
    cout<<"Address of first block is "<<arr<<endl;
    cout<<"Address of first block is "<<&arr[0]<<endl;
    cout<<*arr<<endl; //first element
    cout<<*arr+1<<endl; //first element+1
    cout<<*(arr+1)<<endl; //second element
    cout<<arr[3]<<endl; //output 12
    cout<<*(arr+3)<<endl; //output 12
    int i=3;
    cout<<i[arr]<<" "<<*(i+arr)<<endl; //Outout 12 12 
    return 0;
}