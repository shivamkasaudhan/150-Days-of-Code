#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char a[50];
    cin.getline(a,50);
    int lenght = strlen(a);
    cout<<lenght<<endl;
    char s1, s2;
    cin>>s1>>s2;
    cout<<strcmp(s1,s2)<<endl;
    cout<<a<<endl;
    return 0;
}