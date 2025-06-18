#include <iostream>
using namespace std;

int main(){
    cout<<"Enter percentage : ";
    float p;
    cin>>p;

    if(p<= 100 && p>=81){
        cout<<"Very good";
    }

    else if(p>=61 && p<=80){
        cout<<"Good";
    }

    else if (p>= 41 && p<= 60){
        cout<<"Average";
    }

    else{
        cout<<"Fail";
    }


}
