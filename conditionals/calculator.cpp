#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Which opration do you want to perform +,-,*,/ :" ;
    char op;
    cin>>op;

    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    int y = (int)op;

    if(y == 43){
        float n = a+b;
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<n;
    }
    
    if(y == 45){
        float n = a-b;
        cout<<"Diffrence of the given numbers is "<<n;
    }

    if(y == 42){
        float n = a*b;
        cout<<"Product of the given numbers is "<<n;
    }

    if(y == 47){
        float n = a/b;
        cout<<"Division of the given numbers is "<<n;
    }
}    