#include <iostream>
using namespace std;
bool ckeck_tf(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count= 1;
        for (int j = i; j < n; i++)
        {
            if (a[j]==a[i])
            {
                count = count+1;
            }
            
        }
    }

    return 0;
}
int main()
{
    int a[6] = {1, 1, 2, 2, 2, 3};
    cout<<ckeck_tf(a,6);
    return 0;
}