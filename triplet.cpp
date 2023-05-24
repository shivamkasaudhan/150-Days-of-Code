#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            for (int k = j+1; k <n; k++)
            {
                if (a[i]+a[j]+a[k]==key)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                    break;
                }
                
            }
            
        }
        
    }
    


    return 0;
}