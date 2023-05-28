#include <iostream>
using namespace std;
int main()
{
    int a[3] = {1, 1, 1};
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        ans = ans ^ a[i];
    }
    cout<<ans<<endl;
    return 0;
}