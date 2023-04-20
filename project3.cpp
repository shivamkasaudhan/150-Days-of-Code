// Negotiating a consumer loan is not always straightforward. One form of 
// loan is the discount installment loan, which works as follows. Suppose a 
// loan has a face value of $1,000, the interest rate is 15%, and the duration 
// is 18 months. The interest is computed by multiplying the face value of 
// $1,000 by 0.15, to yield $150. That figure is then multiplied by the loan 
// period of 1.5 years to yield $225 as the total interest owed. That amount is 
// immediately deducted from the face value, leaving the consumer with only 
// $775. Repayment is made in equal monthly installments based on the face 
// value. So the monthly loan payment will be $1,000 divided by 18, which 
// is $55.56. This method of calculation may not be too bad if the consumer 
// needs $775 dollars, but the calculation is a bit more complicated if the 
// consumer needs $1,000. Write a program that will take three inputs: the 
// amount the consumer needs to receive, the interest rate, and the duration 
// of the loan in months. The program should then calculate the face value 
// required in order for the consumer to receive the amount needed. It should 
// also calculate the monthly payment. Your program should allow the calculations to be repeated as often as the user wishes
#include <iostream>
using namespace std;

int main(){
    int face_value,month;
    double i_rate;
    char more;
    do
    {
    cout<<"Enter the Needed Ammount: ";
    cin>>face_value;
    cout<<"Enter The Intrest rate: ";
    cin>>i_rate;
    cout<<"Duration Of the loan in month: ";
    cin>>month;
    double payment=face_value-(face_value*(i_rate/100)*month/12) ;
    cout<<"The face value of loan is : "<<payment<<endl;
    double installment = face_value/month;
    cout<<"Your monthly installment will be : "<<installment<<endl;
    cout<<"Do you want to cpntinue? y/n: ";
    cin>>more;
    } while (tolower(more)=='y');
    return 0;
}