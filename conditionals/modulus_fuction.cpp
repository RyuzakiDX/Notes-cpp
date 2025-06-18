#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number : ";
    float x;
    cin>>x;

    if(x >= 0){
        cout<<x;
    }
    if(x < 0){
        cout<<x*(-1);
    }

}