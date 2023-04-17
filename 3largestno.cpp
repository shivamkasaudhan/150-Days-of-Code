#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if (a == b && b == c) {
    cout << "All numbers are equal." << endl;
} else if (a == b || b == c || c == a) {
    cout << "Enter different values." << endl;
} else {
    cout << ((a > b && a > c) ? "a is greater." : (b > a && b > c) ? "b is greater." : "c is greater.") << endl;
}


    return 0;
}