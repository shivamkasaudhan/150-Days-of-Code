// Write a program that reads in ten whole numbers and that outputs the 
// sum of all the numbers greater than zero, the sum of all the numbers less 
// than zero (which will be a negative number or zero), and the sum of all 
// the numbers, whether positive, negative, or zero. The user enters the ten 
// numbers just once each and the user can enter them in any order. Your 
// program should not ask the user to enter the positive numbers and the 
// negative numbers separately.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. how many no you want to enter: ";
    cin>>n;
    int arr[n];

    for (int  i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1 <<"th value :";
        cin>>arr[i];
    }
    int sum_pos=0;
    int sum_neg=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            sum_pos= sum_pos+arr[i];
            
        }else{
            sum_neg=sum_neg+arr[i];
        }
        
    }
    cout<<"positive sum: "<<sum_pos<<endl;
    cout<<"negitive sum: "<<sum_neg<<endl;
    
    return 0;
}