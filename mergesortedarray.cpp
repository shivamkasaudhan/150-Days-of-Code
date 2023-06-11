#include <iostream>
#include <vector>
using namespace std;

void merge(int a[], int m, int b[], int n, int c[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < m)
    {
        c[k++] = a[i++];
    }

    while (j < n)
    {
        c[k++] = b[j++];
    }
}

void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[3] = {2, 4, 6};
    int c[8] = {0};

    merge(a, 5, b, 3, c);
    print(c, 8);

    return 0;
}

//leetcode 
//88. Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i= m-1;
        int j= n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]= nums1[i--];
            }else{
                nums1[k--]=nums2[j--];
            }
        }
        while(j>=0){
            nums1[k--]= nums2[j--];
        }
    }
};