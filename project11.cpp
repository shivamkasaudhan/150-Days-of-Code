// Write a program that calculates the total grade for N classroom exercises 
// as a percentage. The user should input the value for N followed by each of 
// the N scores and totals. Calculate the overall percentage (sum of the total 
// points earned divided by the total points possible) and output it as a percentage. Sample input and output is shown below.
// How many exercises to input? 3
// Score received for exercise 1: 10
// Total points possible for exercise 1: 10
// Score received for exercise 2: 7
// Total points possible for exercise 2: 12
// Score received for exercise 3: 5
// Total points possible for exercise 3: 8
// Your total is 22 out of 30, or 73.33%.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many exercises to input? ";
    cin>>n;
    int arr[n] , array[n];
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Score received for exercise "<<i+1<<" :";
        cin>>arr[i];
        cout<<"Total points possible for exercise "<<i+1<<" :";
        cin>>array[i];
    }
    int rm_sum=0;
    int om_sum=0;
    for (int i = 0; i < n; i++)
    {
        rm_sum=rm_sum+array[i];
        om_sum=om_sum+arr[i];
    }
    double percent = double(om_sum*100)/rm_sum;
    cout<<"Your Total is "<<om_sum<<" out of "<<rm_sum<<" or percent is "<<percent<<endl;
    return 0;
}
