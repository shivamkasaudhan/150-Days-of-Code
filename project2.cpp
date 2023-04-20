// Workers at a particular company have won a 7.6% pay increase retroactive 
// for 6 months. Write a program that takes an employee’s previous annual 
// salary as input, and outputs the amount of retroactive pay due the employee,
 //the new annual salary, and the new monthly salary. Use a variable 
// declaration with the modifier const to express the pay increase. Your program 
//should allow the calculation to be
#include <iostream>
using namespace std;
double increment(int s,double d ){
    return(s+s*d);
}
int main()
{
    double Salery;
    const double increase = 0.076;
    char more;
    do
    {
        cout<<" Enter your Salery: ";
        cin>>Salery;
        cout<<"Redioactive Salery due: "<<(Salery*(increase/2))<<endl;
        cout<<"your salery after increment : "<<increment(Salery, increase)<<endl;
        cout<<"New monthly salery : "<<increment(Salery,increase)/12<<endl; 
        cout<<"continue: y/n ";
        cin>>more;
    } while (tolower(more)=='y');
    
    return 0;
}