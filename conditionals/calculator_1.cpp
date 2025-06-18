#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;

    char ch;
    cout<<"Enter the opration : ";
    cin>>ch;

    int b;
    cout<<"Enter other number : ";
    cin>>b;

    if(ch == '+') cout<<a+b; 
    else if(ch == '-') cout<<a-b; 
    else if(ch == '*') cout<<a*b; 
    else if(ch == '/') cout<<a/b;             
}