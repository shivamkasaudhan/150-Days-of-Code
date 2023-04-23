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
int main(){
    double cost,i_rate;
    int year;
    char more;
    do
    {
        std::cout<<"Enter the cost of the pencil= ";
        std::cin>>cost;
        std::cout<<"Enter the inflation rate= ";
        std::cin>>i_rate;
        std::cout<<"Number of years from now: ";
        std::cin>>year;
        double rate = i_rate*0.01;
        double infleted_cost = cost;
        for (int i = 0; i <=year; i++)
        {
            infleted_cost = cost + cost*rate;
        }
        std::cout<<"After "<<year<<" year according to inflation rate of "<<i_rate<<"% the cost of pencil will be "<<infleted_cost<<". "<<std::endl; 
        
        std::cout<<"Do you want to continur? y/n: ";
        std::cin>>more;
    } while (tolower(more)=='y');
    

    
    return 0;
}