#include <iostream>
using namespace std;
int getSize(char n){
    int count=0;
    for(int i =0; n[i] !='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    cout<<name;
    cout<<"size of name: "<<getSize(name);
    return 0;
}
