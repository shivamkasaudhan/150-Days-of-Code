#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<< "Enter Your Age ";
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "You are 12 years old."<<endl;
        break;
    case 18:
        cout<<"You are 18 years old."<<endl;
    default:
        cout<<"You are niether 12 nor 12 years old.";
        break;
    }

    return 0;
}