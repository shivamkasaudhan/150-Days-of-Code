#include <iostream>
using namespace std;
int getSize(char* n) {
    int count = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        count++;
    }
    return count;
}
void revers(char name[] , int n ){
    int s=0;
    int e =n-1;
    while (s<=e)
    {
        swap(name[s++], name[e--]);
    }
    
}
bool check_palindrome(char name[],int n){
    int s=0;
    int e = n-1;
    while (s<=e)
    {
        if (name[s]!=name[e])
        {
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return -1;
    
}

int main() {
    char name[20];
    cin >> name;
    cout << name<<endl;
    cout << "size of name: " << getSize(name)<<endl;
    revers(name, getSize(name));
    cout<<"reverse of string: "<<name<<endl;
    cout<<check_palindrome(name, getSize(name));
    return 0;
}
