#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter 1st number : ";
    cin>>a;

    cout<<"Enter 2nd number : ";
    cin>>b;

    cout<<"Enter 3rd number : ";
    cin>>c;

    if(a>b & b>c){
        cout<<a<<" is the largest number : ";
    }

 

    else if(b>a && b>c){
        cout<<b<<" is the largest number : ";

    }

    else if(c>a && c>b){
        cout<<c<<" is the largest number : ";
    }

}