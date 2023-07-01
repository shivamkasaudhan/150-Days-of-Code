#include <iostream>
using namespace std;
void rowsum(int arr[][4], int i, int j){
    for (int i = 0; i < 3; i++)
    {
        int sum =0;
        for (int j = 0; j < 4; j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    
}
int main(){
    int arr[3][4];
    cout<<"Enter the matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    rowsum(arr,3,4);
    return 0;
}