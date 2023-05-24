#include <iostream>
using namespace std;
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void sortfunc(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (a[i] == 0 && i < j)
        {
            i++;
        }
        while (a[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int a[6]={1,0,1,0,0,1};
    sortfunc(a, 6);
    printarray(a, 6);

    return 0;
}