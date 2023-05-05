// sum of subarray
// given an array a[] of size n. output sum of each subarray of given array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            cout << curr << endl;
        }
    }

    return 0;
}