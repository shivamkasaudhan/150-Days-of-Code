//  Many treadmills output the speed of the treadmill in miles per hour 
// (mph) on the console, but most runners think of speed in terms of a pace. 
// A common pace is the number of minutes and seconds per mile instead 
// of mph.
// Write a program that starts with a quantity in mph and converts the 
// quantity into minutes and seconds per mile. As an example, the proper 
// output for an input of 6.5 mph should be 9 minutes and 13.8 seconds per 
// mile. If you need to convert a double to an int, which will discard any 
// value after the decimal point, then you may use
// intValue = static_cast<int>(dblVal);
#include <iostream>
using namespace std;
int main(){
    double a;
    cout<<"Enter the speed in mph: ";
    cin>>a;
    int  m = 1/(a*0.01666667);
    int s = 1/(a*0.000277777778 )- m*60;
    cout<<"covering 1 mile in "<<m<<" minutes"<<" and "<<s<<" Second. "<<endl;
    return 0;
}