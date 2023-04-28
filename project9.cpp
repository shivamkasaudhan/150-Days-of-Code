//  Modify your program from Programming Project 8 so that it outputs the
// sum of all positive numbers, the average of all positive numbers, the sum
// of all nonpositive numbers, the average of all nonpositive numbers, the
// sum of all positive and nonpositive numbers, and the average of all numbers entered.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. how many no you want to enter: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th value :";
        cin >> arr[i];
    }
    int sum_pos = 0;
    int sum_neg = 0;
    int sum = 0;
    int pos_count = 0;
    int neg_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum_pos = sum_pos + arr[i];
        }
        else
        {
            sum_neg = sum_neg + arr[i];
        }
        sum = sum + arr[i];
        if (arr[n] < 0)
        {
            neg_count++;
        }else{
            pos_count++;
        }
    }

    double average = sum / n;
    double pos_ave = pos_ave /pos_count;
    double neg_ave = sum_neg / neg_count;
    cout << "positive sum: " << sum_pos << endl;
    cout << "negitive sum: " << sum_neg << endl;
    cout << "Total sum: " << sum << endl;
    cout << "Average of total sum: " << average << endl;
    cout << "Average of positive sum: " << neg_ave << endl;
    cout << "Average of negetive sum: " << pos_ave << endl;
    return 0;
}