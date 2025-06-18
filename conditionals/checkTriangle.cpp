#include <iostream>
using namespace std;

int main(){
    //inputing sides of triangle
    float a;
    cout<<"Enter first side of triangle : ";
    cin>>a;

    float b;
    cout<<"Enter second side of triangle : ";
    cin>>b;

    float c;
    cout<<"Enter third side of triangle : ";
    cin>>c;


    if((a+b) > c && (b+c)> a && (c+a) > b){
        cout<<"Yes these can be the sides of triangle : ";
    }
    else{
        cout<<"No it can't be the sides of triangle";
    }

}