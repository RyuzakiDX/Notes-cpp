#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a integer : ";
    cin>>x;

    float y = (float)x; //Typecasting hai ye iska mtlb datatype change kerna
    cout<<"Half oh this number is : "<<y/2;
}