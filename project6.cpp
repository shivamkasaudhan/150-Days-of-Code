// It is difficult to make a budget that spans several years, because prices are 
// not stable. If your company needs 200 pencils per year, you cannot simply use this
//  year’s price as the cost of pencils 2 years from now. Because 
// of inflation the cost is likely to be higher than it is today. Write a program 
// to gauge the expected cost of an item in a specified number of years. The 
// program asks for the cost of the item, the number of years from now that 
// the item will be purchased, and the rate of inflation. The program then 
// outputs the estimated cost of the item after the specified period. Have 
// the user enter the inflation rate as a percentage, like 5.6 (percent). Your 
// program should then convert the percent to a fraction, like 0.056, and 
// should use a loop to estimate the price adjusted for inflation. 
#include <iostream>
using namespace std;
int main(){
    double cost,i_rate;
    int year;
    char more;
    do
    {
        cout<<"Enter the cost of the pencil= ";
        cin>>cost;
        cout<<"Enter the inflation rate= ";
        cin>>i_rate;
        
    } while (tolower(more)=='y');
    

    
    return 0;
}