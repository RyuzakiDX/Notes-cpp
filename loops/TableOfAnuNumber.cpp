#include<iostream>
using namespace std;
int main(){
    int a;
    int m;
    cout<<"Enter whose multiple you want :";
    cin>>m;
    cout<<"Enter how many multiples you want :";
    cin>>a;

    for(int i=1; i<=a; i++){
        cout<<m*i<<endl;
    }
}