#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter nth number of AP :";
    cin>>n;

    int an = 1 + (n-1)*2;


    for(int i = 1; i<= an ; i = i+2){
        cout<<i<<endl;
    }

}