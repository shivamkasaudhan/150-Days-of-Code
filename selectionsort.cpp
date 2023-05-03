//selection sort
#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    int s =0;
    int e =n;
    for (int i = 0; i < n; i++)
    {
        int mid = (s+e)/2;
        if (arr[mid]==key)
        {
            return i;
        }else if (arr[mid]>key)
        {
            e = mid -1;
        }else{
            s = mid+1;
        }
        
        
    }
    return -1;
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp= arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cin>>key;
    cout<<linearsearch(arr,n,key);
    
    return 0;
}