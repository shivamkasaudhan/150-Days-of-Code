#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int a[], int start, int end){
    while (start<end) {
        int temp = a[start];
        a[start]= a[end];
        a[end]= temp;
        start++;
        end--;
    }   
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for (int i =0; i<n; i++) {
        cin>>a[i];
    }
    reverseArray(a, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
