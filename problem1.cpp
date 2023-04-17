// A metric ton is 35,273.92 ounces. Write a program that will read the weight 
// of a package of breakfast cereal in ounces and output the weight in metric 
// tons as well as the number of boxes needed to yield 1 metric ton of cereal. 
// Your program should allow the user to repeat this calculation as often as 
// the user wishes.
#include <iostream>
using namespace std;
int main(){
    double A;
    cout<<"Enter the weight of package : ";
    cin>>A;
    double m = A/35273.92;
    if (m>1)
    {
        cout<<"Weight of package in Mitric : " <<m<<endl;
    }else
    {
        cout<<(35273.92-A)<<" ounces Required more to reach one mitric"<<endl;
    }
    
    
    return 0;
}