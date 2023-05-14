#include <iostream>
using namespace std;
int main()
{
    int c;
    cin >> c;
    int i = 1;
    while (i <= c)
    {
        int j = 1;
        while (j <= c)
        {
            cout << j<<" ";
            // cout << c-j+1<<" ";
            j = j + 1;
        }
        cout<<endl;
        i+=1;
    }

    return 0;
}
