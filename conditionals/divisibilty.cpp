#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number whose divisibilty is to be check : ";
    int x;
    cin>>x;
    cout<<"Enter the number to which divisibility of "<<x<<" is to be check :";
    int y;
    cin>>y;

    while(true){//while loop bas maje me bnaya hai uska kuch kaam nhi hai idhar
        
     
        if(x%y == 0){
            cout<<x<<" is divisible by "<<y<<endl;
            break;
        }
        if(x%y != 0){
            cout<<x<<" is not divisible by "<<y;
            break;
        }    
    }
}