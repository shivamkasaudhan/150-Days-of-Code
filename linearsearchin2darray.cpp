#include <iostream>
using namespace std;
bool ispresent(int arr[][4],int target, int n, int m){
    for(int n=0;n<3;n++){
        for (int m = 0; m < 4; m++)
        {
            if(arr[n][m]==target){
                cout<<n<<" "<<m<<endl;
                return true;
            }
        }
        
    }
    return false;
}
int main(){
    int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    cout<<"Search element: ";
    int target;
    cin>>target;
    if(ispresent(arr, target,3,4)){
        cout<<"found"<<endl;
    }else{
        cout<<"not found."<<endl;
    }
    return 0;
}