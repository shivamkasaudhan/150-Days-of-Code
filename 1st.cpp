#include <iostream>
using namespace std;
int main(){
    //first day of code for next 20days (basic of c++)
    int n,m;
    float a,b;
    double x,y;
    cout<<"Enter 2 integer value : ";
    cin>>n>>m;
    cout<<"Enter 2 float value : ";
    cin>>a>>b;
    cout<<"Enter 2 double value : ";
    cin>>x>>y;
    cout<<"Address of Int : "<<&n<<" "<<&m<<endl;
    cout<<"Size of Int : "<<sizeof(n,m)<<endl;
    cout<<"Address of float : "<<&a<<" "<<&b<<endl;
    cout<<"Size of float : "<<sizeof(a,b)<<endl;
    cout<<"Address of  double: "<<&x<<" "<<&y<<endl;
    cout<<"Size of  double: "<<sizeof(x,y)<<endl;
    return 0;
}