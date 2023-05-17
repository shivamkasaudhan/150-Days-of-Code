#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r){
    int up = factorial(n);
    int low = factorial(r) * factorial(n - r);
    return up / low;
}

int main(){
    int n, r;
    cin >> n >> r;
    cout << ncr(n, r);

    return 0;
}
