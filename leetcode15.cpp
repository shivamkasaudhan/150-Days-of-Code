// 2469. Convert the Temperature
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double k= celsius +273.15;
        double f= celsius*1.80 +32.00;
        ans.push_back(k);
        ans.push_back(f);
        return ans;

    }
};
//1486. XOR Operation in an Array
//solving on vscode
#include <iostream>
using namespace std;
int main()
{
    int n,start;
    cin >> n>>start;
    int arr[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        arr[0] = start;
        arr[i+1] =arr[i]+ 2;
        // cout<<arr[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        ans= ans^arr[i];
    }
    cout<<endl;
    cout<<ans<<endl;
    cout<<(1^3^5^7^9);
    return 0;
}
//leetcode
class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        int ans=0;
        for(int i=0;i<n-1;i++){
            arr[0]=start;
            arr[i+1] =arr[i]+ 2;
            
        }

        for(int i =0; i<n;i++){
            ans=ans^arr[i];
        }
        if(n==1){
            ans=start;
        }
        return ans;
        
    }
};

// 2651. Calculate Delayed Arrival Time
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int ans=(arrivalTime+delayedTime);
        return (ans%24);
        
    }
};
// 2427. Number of Common Factors
//100% beats
class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        for(int i =1;i<1001;i++){
            if(a%i==0 & b%i==0){
                count++;
            }
        }
        return count;
        
    }
};
// 412. Fizz Buzz
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string a;
        for(int i=1;i<=n;i++){
            if(i%15==0){
                a= "FizzBuzz";
            }else if(i%3==0){
                a="Fizz";
            }else if(i%5==0){
                a= "Buzz";
            }else{
                a= to_string(i);
            }
            ans.push_back(a);
        }
        return ans;
        
    }
};
// 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int a=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=-1;
            }else if(nums[i]>0){
                nums[i]=1;
            }
            a=a*nums[i];
        }
        return a;
    }
};



