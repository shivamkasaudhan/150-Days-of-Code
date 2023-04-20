//  Modify your program from Programming Project 2 so that it calculates the 
// retroactive salary for a worker for any number of months, instead of just 
// 6 months. The number of months is entered by the user.
// Workers at a particular company have won a 7.6% pay increase retroactive 
// for 6 months. Write a program that takes an employee’s previous annual 
// salary as input, and outputs the amount of retroactive pay due the employee,
 //the new annual salary, and the new monthly salary. Use a variable 
// declaration with the modifier const to express the pay increase. Your program 
//should allow the calculation to be
#include <iostream>
#include<iomanip> //this header file for presision of points in no.
using namespace std;
double increment(int s,double d ){
    return(s+s*d);
}
int main()
{
    double Salery;
    const double increase = 0.076;
    char more;
    int n;
    do
    {
        cout<<" Enter your Salery: ";
        cin>>Salery;
        cout<<"Enter the no of month redioactive due: ";
        cin>>n;
        cout<<"Redioactive Salery due: "<<fixed<<setprecision(2)<<(Salery*(increase*n/12))<<endl;
        cout<<"your salery after increment : "<<increment(Salery, increase)<<endl;
        cout<<"New monthly salery : "<<increment(Salery,increase)/12<<endl; 
        cout<<"continue: y/n ";
        cin>>more;
    } while (tolower(more)=='y');
    
    return 0;
}