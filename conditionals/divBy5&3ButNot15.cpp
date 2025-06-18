#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number : ";
    int a;
    cin>>a;

    if((a%5 || a%3) == 0 ){
        if(a%15 != 0) cout<<"Yes";
        else cout<<"No";
    }
}