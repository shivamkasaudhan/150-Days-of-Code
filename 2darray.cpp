#include <iostream>
using namespace std;
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,1,1};
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    int arr2[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}