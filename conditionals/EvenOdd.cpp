#include <iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter a interger : ";
    cin>>n;

    if(n%2 == 0){
        cout<<n<<" is an even number"<<endl;
        cout<<"not wow"; //jab mai if else condistion ke age curly bracket me likhunga toh mai alag alag line likh skta hu nito ek hi likh pata
    }

    else{
        cout<<n<<" is an odd number"<<endl;
        cout<<"wow";
    }

}