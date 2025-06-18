#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;

    if(n%3 && n%5 == 0){
        cout<<n<<" is divisible by 3 and 5 both";
    }
    else{
        cout<<n<<" not divisible by either 3 or 5 or both";
    }
}